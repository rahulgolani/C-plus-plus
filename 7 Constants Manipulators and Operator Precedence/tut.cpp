/*
----------------------
Constants-> cannnot be changed

const int a=3; 

------------------------
Manipulators-> Operators which helps in data display or to format how the data will get displayed

Some famous manipulators->

endl, setw (reserves a particular width/space for something to display)

-------------------------
Operator Precedence->

cppreference operator precedence and associativity

*/

#include<iostream>
#include<iomanip>
using namespace std;

int main(){

    const int a =3;
    cout<<a<<endl;

    int b=1,c=12,d=123,e=1234;
    cout<<"Value of b without setw is "<<b<<endl;
    cout<<"Value of c without setw is "<<c<<endl;
    cout<<"Value of d without setw is "<<d<<endl;
    cout<<"Value of e without setw is "<<e<<endl;

    cout<<"Value of b with setw is "<<setw(4)<<b<<endl;
    cout<<"Value of c with setw is "<<setw(4)<<c<<endl;
    cout<<"Value of d with setw is "<<setw(4)<<d<<endl;
    cout<<"Value of e with setw is "<<setw(4)<<e<<endl;

    return 0;
}