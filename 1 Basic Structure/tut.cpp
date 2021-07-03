// Why c++ -> very close to hardware, fast , more control over system resources, memory management

#include<iostream>
using namespace std;
// header file
// iostream helps in input and output

// main is a function which is a entry point in the program
// int is the return type
int main(){
    // cout is a function in iostream and this is in std namespace
    // :: is a scope resolution operator
    // std::cout<<"Hello World";

    cout<<"Hello World"; //If we use using namspace std, we do not have to specify std:: everytime
    return 0;// 0 value means successful termination of program
}