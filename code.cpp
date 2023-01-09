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
class car
{
    public : string carname,carno;
             int x,petrol,advchar;
    void cardetails()
    {
        cout<<"\033[1;36m"<<"\nSELECT THE CAR YOU WANT TO RENT : ";
        cout<<"\033[1;31m";
        cin>>x;
        switch(x)
        {
            case 1:
                carname = "Ferrari 296 GTB";
                carno = "TN 75 AA 7106";
                break;
            case 2:
                carname = "McLaren 765LT";
                carno = "AP 21 BP 7331";
                break;
            case 3:
                carname = "Porsche 911 GT3";
                carno = "UP 19 D 0343";
                break;
            case 4:
                carname = "Ferrari F8 Tributo";
                carno = "MH 12 RN 1289";
                break;
