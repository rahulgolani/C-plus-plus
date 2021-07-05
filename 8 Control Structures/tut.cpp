/*

CONTROL STRUCTURES->

1) SEQUENCE STRUCTURE-> ENTRY-> ACTION 1-> ACTION 2-> EXIT

2) SELECTION STRUCTURE-> ENTRY-> IF (CONDITION) THEN ACTION 1 ELSE ACTION 2 -> EXIT

3) LOOP STRUCTURE-> ENTRY-> LOOP-> CONDITION -> ACTION IF TRUE-> THEN AGAIN LOOP -> EXIT IF CONDITION FALSE
EXAMPLE-> WHILE LOOP TO PRINT NATURAL NUMBERS TILL 1000

how to model these structures in code->

1) if-else statement
2) if else ladder
3) switch-case

*/

#include<iostream>
using namespace std;

int main(){
    //Selection control structure
    int i=0;
    if (i<3){
        cout<<i<<endl;
    }
    int age;
    cout<<"Tell me your age"<<endl;
    cin>>age;
    // if (age>=18){
    //     cout<<"You van vote"<<endl;
    // }
    // else{
    //     cout<<"You cannot Vote"<<endl;
    // }

    switch (age)
    {
    case 18:
        cout<<"You can vote"<<endl;
        break;
    
    default:
        cout<<"You cannot vote"<<endl;
        break;
    }
    return 0;
}