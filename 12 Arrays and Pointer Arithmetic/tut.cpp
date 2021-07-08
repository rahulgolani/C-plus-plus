/*
Arrays-> collection of similar types stored in contiguous memory locations    

*/

#include<iostream>
using namespace std;

int main(){
    // 1 way to create array
    int marks[4]={23,24,25,26};//declare and initialize
    // or marks[]={1,2,3,4}
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;

    int mathMarks[4];//declare and use later
    mathMarks[0]=1;
    mathMarks[1]=2;
    mathMarks[2]=3;
    mathMarks[3]=4;
    cout<<mathMarks[0]<<endl;
    cout<<mathMarks[1]<<endl;
    cout<<mathMarks[2]<<endl;
    cout<<mathMarks[3]<<endl;

    //Accessing array elements using loop
    int len=sizeof(marks)/sizeof(marks[0]);//length of array

    for(int i=0;i<len;i++){
        cout<<"The value of marks "<<i<<" is "<<marks[i]<<endl;
    }

    /*
    Pointers and Arrays

    in case of pointer variables-> if we had to store any address into them we used & operator, but in case of arrays the name of the array itself gives the address we dont have to use & operator

    Pointer Arithmetic-> Address_New= Address_Current + i*sizeof(datatype)

    example-> int* p=marks
    *(p) will give marks[0]
    *(p+1) will give marks[1]
    *(p+2) will give marks[2]
    *(p+3) will give marks[3]
    

    */

   int* p=marks;

   cout<<"The value of marks[0] is "<<*p<<endl;
   cout<<"The value of marks[1] is "<<*(p+1)<<endl;
   cout<<"The value of marks[2] is "<<*(p+2)<<endl;
   cout<<"The value of marks[3] is "<<*(p+3)<<endl;

   /*
   but if we use increment operators
   *(p++), so first it will print the value at p then increment the address
   but *(++p) here first the address will be incremented and then the value will be printed
   
   */

    return 0;
}