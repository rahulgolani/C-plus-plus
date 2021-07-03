/*

Input Stream -> Direction of flow of bytes from input device to main memory

Output Stream -> Direction of flow of byte from main memory to output device

*/

#include<iostream>
using namespace std;

int main(){

    int num1,num2;
    // << is a insertion operator
    cout<<"Enter values of num1 \n";
    cin>>num1;

    cout<<"Enter values of num2 \n";
    // >> is a extraction operator
    cin>>num2;

    cout<<"The sum of num1 and num2 is "<<num1+num2;

    return 0;
}