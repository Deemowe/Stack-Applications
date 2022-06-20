#include <iostream>
#include <string.h>
#include "doubleStk.h"
#include "charStk.h"



int main()
{
    int ch;
    string arithEx;
    cout<<"\t\t\t\t\t\t _________________________\n";
    cout<<"\t\t\t\t\t\t|                         |\n";
    cout<<"\t\t\t\t\t\t|Stack Application Program|\n";
    cout<<"\t\t\t\t\t\t|_________________________|\n\n\n";

    while(1){


        cout<<"\t\t\t\t _______________\n";
        cout<<"\t\t\t\t|               |";
        cout<<"\n\t\t\t\t|      Menu\t|\n";
        cout<<"\t\t\t\t|_______________|___________________________________\n";
        cout<<"\t\t\t\t|                                            |      |\n";
        cout<<"\t\t\t\t|  Convert From Infix To Postfix             |  1   |\n";
        cout<<"\t\t\t\t|____________________________________________|______|\n";
        cout<<"\t\t\t\t|                                            |      |\n";
        cout<<"\t\t\t\t|  Calculate Postfix Expression Result       |  2   |\n";
        cout<<"\t\t\t\t|____________________________________________|______|\n";
        cout<<"\t\t\t\t|                                            |      |\n";
        cout<<"\t\t\t\t|  Exit                                      |  3   |\n";
        cout<<"\t\t\t\t|____________________________________________|______|\n";
        cout<<"\t\t\t\t                                                   \n";
        cout<<"\t\t\t\t   YOUR CHOICE                           >>>>   ";

        cin>>ch;


        switch(ch){

        case 1:
             cout <<"\n\n\n\t\t\tEnter Your Arithmetic Expression To Convert From Infix To Postfix!\n";
             cout<<"\t\t\tHINT:A+B ------> AB+\n";
             cout <<"\n\t\t\t*Infix: ";
             getline(cin>>ws,arithEx);
             cout <<"\t\t\t*Postfix: ";
             convert(arithEx);
             cout<<endl<<endl<<endl;
             break;

        case 2:
             cout <<"\n\n\n\t\t\tEnter Your Postfix Expression To Calculate It's Result!\n" << endl;
             cout<<"\t\t\tHINT:12+ ------> 3\n";
             cout <<"\t\t\t*Postfix: ";
             getline(cin>>ws,arithEx);
             cout <<"\t\t\t*Result: ";
             cout<<evaluation(arithEx);
             cout<<endl<<endl<<endl;
             break;


        case 3:
            cout <<"\n\n\n\t\t\t-------Thanks And Have A Nice Day :)-------\n\n" << endl;
            exit(0);


        default:
            cout <<"\n\n\n\t\t\t------Sorry, invalid input!-------\n\n" << endl;
            cout<<endl<<endl<<endl;
        }

    }




    return 0;
}

