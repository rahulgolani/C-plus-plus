/*
Header Files-> Whose functionalty can be used by us in the programs

There are 2 types of header files->

1) System header files: It comes with compiler ex-> iostream
for documentation refer cppreference.com 

2) User defined header files: It is writter by programmer, file should be in current directory

*/

/*
Operators

1) Arithmetic Operators- +,-,*,/,%,a++,a--,++a,--a

2) Assignment Operators- =

3) Comparison Opeartors- ==, >, <, <=, >=, !=
Use () for comparison expressions

return 1 or 0 for true/ false

4) Logical Operators- && (and), || (or), !(not operator)

5) Bitwise Operators- later

*/

#include<iostream>
#include"this.h" //this is how you include user defined header files
using namespace std;

int main(){
    // endl is used as "\n"
    cout<<"Hello"<<endl<<"World"<<endl;
    int a=5,b=6;
    cout<<"a= "<<a<<" b= "<<b<<endl; 
    cout<<"a+b "<<a+b<<endl;
    cout<<"a-b "<<a-b<<endl;
    cout<<"a*b "<<a*b<<endl;
    cout<<"a/b (Integer Division) "<<a/b<<endl;
    cout<<"a++ "<<a++<<endl;//first print then operation
    cout<<"a--"<<a--<<endl;//first print then operation
    cout<<"++a "<<++a<<endl;//first operation then print
    cout<<"--a "<<--a<<endl;//first operation then print

    //Comparison Operator
    cout<<"a==b "<<(a==b)<<endl;
    cout<<"a<b "<<(a<b)<<endl;
    cout<<"a>b "<<(a>b)<<endl;
    cout<<"a>=b "<<(a>=b)<<endl;
    cout<<"a<=b "<<(a<=b)<<endl;
    cout<<"a!=b "<<(a!=b)<<endl;

    return 0;
}