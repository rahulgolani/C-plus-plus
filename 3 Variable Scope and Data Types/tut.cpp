// data types in c++->

// categorised in 3 groups->
// builtin
// user-defined
// derived

// built-in->
// int, float, char, double(similar to float, but with higher precision), boolean

// user-defined->
// Struct
// Union
// Enum


// derived->
// Arrays
// Functions
// Pointers

/*
Scope of variables

scope-> region where the existence of variable is valid

Local Variables-> declared inside the braces of another function and can be accessed only from there

Global Variables-> declared outside any function and can be accessed from anywhere

Global and local variables name can be same in c++-> YES

*/

#include<iostream>
using namespace std;

int glo=24;

void sum(){
    int glo=10;
    cout<<glo<<"\n";
}

int main(){
    int glo=48; //local variables have greater precedence
    int a=24;
    int b=48;
    bool isTrue=true;
    int c=12, d=15;
    char letter='d'; //if c='ud' no error but ambiguous output
    float pi=3.14;
    cout<<a<<letter<<"\n";
    sum();
    cout<<glo<<"\n";
    cout<<isTrue<<"\n"; //will print 1 or 0
    return 0;
}

