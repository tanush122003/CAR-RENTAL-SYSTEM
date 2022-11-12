#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
class customer
{
    public : string name1,name2,sex,dl,phone;
    void customerdetails()
    {
        cout<<"\033[1;34m"<<"ENTER YOUR FIRST NAME IN CAPITAL LETTERS : ";
        cout<<"\033[1;37m"; 
        cin>>name1;
        cout<<"\033[1;34m"<<"\nENTER YOUR LAST NAME IN CAPITAL LETTERS : ";
        cout<<"\033[1;37m"; 
        cin>>name2;
        cout<<"\033[1;34m"<<"\nENTER YOUR SEX (IF FEMALE ENTER 'F' AND IF MALE ENTER 'M' OTHERWISE 'O') : ";
        cout<<"\033[1;37m";
        cin>>sex;
        enterph :
        cout<<"\033[1;34m"<<"\nENTER YOUR MOBILE NUMBER (ENTER 10 DIGIT NUMBER ONLY) : ";
        cout<<"\033[1;37m";
        cin>>phone;
        if(phone.length()!=10)
        {
            cout<<"\033[1;31m"<<"INVALID MOBILE NUMBER !!! PLEASE ENTER AGAIN !!!"<<endl;
            goto enterph;
        }
        enterdl :
        cout<<"\033[1;34m"<<"\nENTER YOUR DRIVING LICENCE NUMBER : ";
        cout<<"\033[1;37m";
        cin>>dl;
        if(dl.length()!=16)
        {
            cout<<"\033[1;31m"<<"INVALID DRIVING LICENCE NUMBER !!! PLEASE ENTER AGAIN !!!"<<endl;
            goto enterdl;
        }
    }
};
