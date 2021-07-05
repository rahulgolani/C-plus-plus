/*
POINTERS->

A pointer is a data type which holds the address of other data types

*/

#include<iostream>
using namespace std;

int main(){
    
    int a=3;
    int* b=&a; //b holds the address of integer variable

    // Address is allocated in RAM when the program executes

    // & - AddressOf Operator
    // * - Dereference Operator (value at) use case: given a address find the value at it

    cout<<"The Address of a is "<<&a<<endl;
    cout<<"The Address of a is "<<b<<endl;

    //Given a address find the value at the address

    cout<<"The value at address b is "<<*b<<endl;

    //Pointer to Pointer-> A pointer to store the  address of a "pointer"

    int** c=&b;//c here holds the address of b which is a pointer itself

    cout<<"The address of b is "<<&b<<endl;
    cout<<"The address of b is "<<c<<endl;

    cout<<"The value at b is "<<*b<<endl;
    cout<<"The value at b is "<<**c<<endl;
    // here b stores the address of a so value at address of a is 3
    // and c stores the address of b, so *c gives the address of b, which is the value at c, and after that *(*c) gives the value at address b which is 3

    return 0;
}