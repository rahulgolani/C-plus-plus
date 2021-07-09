#include<iostream>
using namespace std;

/*
Funtion Prototypes- If i put this sum function after the main function theni will get a error daying the function was nont declared in this scope. This is because compiler does not know it has been delared after main. This is why we use function prototyping, this is to inform the compiler that these many functions are declared and then the compiler is ready to execute those

way to define function prototype->

type funtion_name (arguments);
*/

// ACTUAL AND FORMAL PARAMETERS

//A AND B ARE FORMAL PARAMETERS
int sum(int a, int b);//Acceptable
int multiply(int, int);//Acceptable
void greet(void); //Acceptable
void greet(); //Acceptable

int sum(int a, int b){
    return a+b;
}

int main(){
    int num1,num2;
    cout<<"Enter Value of Num1"<<endl;
    cin>>num1;
    cout<<"Enter Value of Num2"<<endl;
    cin>>num2;
    //NUM1 AND NUM2 ARE ACTUAL PARAMETERS
    cout<<"The Sum of Num1 and Num2 is "<<sum(num1,num2)<<endl;

    cout<<endl<<endl;

    cout<<"Enter Value of Num1"<<endl;
    cin>>num1;
    cout<<"Enter Value of Num2"<<endl;
    cin>>num2;
    cout<<"The Multiplication of Num1 and Num2 is "<<multiply(num1,num2)<<endl;

    greet();
    return 0;//successfully executed
}

int multiply(int a, int b){
    return a*b;
}

void greet(){
    cout<<"Hello! Good Morning";
}