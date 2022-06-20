#ifndef DOUBLESTK_H_INCLUDED
#define DOUBLESTK_H_INCLUDED



#include <math.h>
using namespace std;


struct node{
    double info;
    node *next;
};

class stack{
private :
    node *Top;

public:
    stack(){Top=NULL;}
    double pop();
    void push(double);
    bool isEmpty(){return (Top==NULL);}
    double peak();

};

void stack::push(double item){
        node *p=new node;
        p->info=item;
        p->next=Top;
        Top=p;

}


double stack::pop(){
    if(isEmpty()){
    cout<<"UnderFlow!"<<endl;
    return '0';
    }

    else{
        node * temp=Top;
        double item=Top->info;
        Top=Top->next;
        delete temp;
        return item;
    }

}


double stack::peak(){

    return Top->info;
}



double result(double op1, double op2 ,char sy){
    switch(sy){
    case '+':
        return (op1 + op2);

         case '-':
        return (op1 - op2);


         case '*':
        return (op1 * op2);


         case '/':
        return (op1 / op2);



        case '%':
        return fmod(op1,op2);


         case '^':
        return pow(op1,op2);

        default:
            cout << "Illegal operation"<< endl;
            exit(1);

    }

    return((double) 0);
}




double evaluation(string post){
    stack obj;
    char symbol;
    double  op1 ,op2 ,value;
    int i=0;

    while (post[i]!= '\0'){
            symbol =post[i];
            if(isdigit(symbol))
               obj.push((double)(symbol - '0'));//from char to double

            else{
                    op2=obj.pop() ;
                    op1=obj.pop() ;
                    value=result(op1,op2,symbol);
                    obj.push(value);

                }


                i++;
    }


return(obj.pop());


}
#endif // DOUBLESTK_H_INCLUDED
