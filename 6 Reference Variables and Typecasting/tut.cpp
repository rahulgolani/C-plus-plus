#include<iostream>
using namespace std;

int c=12;

int main(){
    int c=4;
    
    cout<<"Value of local c is "<<c<<endl;
    cout<<"Value of global c is "<<::c<<endl; //to access global variables use :: scope resoltuion operator

    // 34.4 (decimal literal) is by default taken as a double
    // 34.4f is considered as float

    float d=34.4f;//here f is redundant as we have already specified float
    double e=34.4;
    cout<<"The size of 34.4 is "<<sizeof(34.4)<<endl;
    cout<<"The size of 34.4 is "<<sizeof(34.4f)<<endl;
    cout<<"The size of 34.4 is "<<sizeof(34.4F)<<endl;
    cout<<"The size of 34.4 is "<<sizeof(34.4l)<<endl;
    cout<<"The size of 34.4 is "<<sizeof(34.4L)<<endl;
    
    /*
    Reference Variables

    We have the ability to refer a value by different names
    RohanDas -> Monty -> Dangerous Coder (Same Person, Different Names)

    Use & to create a reference variable  
    */
    int x=5;
    int &y=x;
    // here y is just a reference to x
    cout<<x<<endl;
    cout<<y<<endl;

    /*
    Typecasting

    convering type of one value to another

    (int) a or int(a) works the same way
    */

    int m=45;
    float n=45.56;

    cout<<"m "<<float(m)<<endl;
    cout<<"n "<<int(n)<<endl;

    return 0;
}