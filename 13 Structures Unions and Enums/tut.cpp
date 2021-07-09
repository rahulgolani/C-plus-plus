#include<iostream>
using namespace std;

/*

Structure-> It is a user defined datatype which is used to merge different types of entities together, because in arrays we can only store similar typeof elements 

typedef is used as an alias

*/

/*

Unions-> Same as structure but they provide better memory management

and while using union we can only use 1 entity within union

example -> we are in a barter system and we can exchange car, rice or pounds for money and at a time you can only use 1 entity for exchange so in this case we can use union and it provides better memory management because at a time we can only use 1 entity so the size allocated to this union will be the maximum size of the datatype within. 

*/

/*
Enum-> named representation of a integer index


*/

typedef struct Employee{

    int eId;
    float salary;

}Employee;

typedef union money{
    int rice;
    char car;
    float pounds;
} money;

int main(){

    // struct Employee emp1;
    Employee emp1; //using typedef
    emp1.eId=1;
    emp1.salary=12000;
    cout<<"Employee's ID is "<<emp1.eId<<endl;
    cout<<"Employee's salary is "<<emp1.salary<<endl;
    cout<<endl<<endl;

    //UNIONS

    money m1;
    m1.rice=34;
    cout<<"Rice value is "<<m1.rice<<endl;
    m1.car='c';
    cout<<"Car Value is "<<m1.car<<endl;
    cout<<"Rice Value is "<<m1.rice<<endl;//garbage value since the value will be overidden by cars
        
    //ENUMS

    enum Meal {Breakfast, Lunch, Dinner};
    cout<<Breakfast<<endl;
    cout<<Lunch<<endl;
    cout<<Dinner<<endl;

    // another way to use

    Meal meal1=Breakfast;
    cout<<meal1<<endl;

    return 0;
}