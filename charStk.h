#ifndef CHARSTK_H_INCLUDED
#define CHARSTK_H_INCLUDED



struct nodee{
    char info;
    nodee *next;
};

class stackk{
private :
    nodee *Top;

public:
    stackk(){Top=NULL;}
    char pop();
    void push(char);
    bool isEmpty(){return (Top==NULL);}
    char peak();

};

void stackk::push(char item){
        nodee *p=new nodee;
        p->info=item;
        p->next=Top;
        Top=p;

}


char stackk::pop(){
    if(isEmpty()){
    cout<<"UnderFlow!"<<endl;
    return '0';
    }

    else{
        nodee * temp=Top;
        char item=Top->info;
        Top=Top->next;
        delete temp;
        return item;
    }

}


char stackk::peak(){
      if(isEmpty()){
    cout<<"Empty!"<<endl;
    return '0';
    }
    return Top->info;
}


int priority(char a){
     if(a=='+' || a=='-')
        return 1;
     if(a=='*' || a=='/' || a=='%')
        return 2;
     if(a=='^')
        return 3;


}


bool prcd(char a, char b){
    if(a=='(' || b=='(')
        return false;

        else if(b==')')
        return true;

        else if (a=='^' && b=='^')
        return false;

        else if (priority(a) >= priority(b))
        return true;

    else return false;


}


void convert(string infix){
  string result;
     stackk obj;
     char symbol;
     char topSymbol;
     int i=0;

while (infix[i]!= '\0'){
        symbol =infix[i];

            if(isalpha(symbol))
                result+=symbol;
                else{
                    while(!obj.isEmpty()&& prcd(obj.peak(),symbol)){
                            topSymbol=obj.pop();
                             result+=topSymbol;
                    }

                    if(obj.isEmpty() || symbol!=')')
                        obj.push(symbol);

                    else topSymbol=obj.pop();
                }

                    i++;

    }



    while(!obj.isEmpty()){
            topSymbol=obj.pop();
             result+=topSymbol;

    }

cout<<result;

}

#endif // CHARSTK_H_INCLUDED
