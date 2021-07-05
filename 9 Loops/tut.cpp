/*
LOOPS->

1) FOR LOOP
2) WHILE LOOP
3) DO WHILE LOOP
*/

#include<iostream>
using namespace std;

int main(){
    // FOR LOOP
    int i=0;
    for(i;i<10;i++){
        cout<<i<<endl;
    }
    cout<<endl;
 
    i=0;//CANNOT DECLARE IT AGAIN
    // WHILE LOOP
    while (i<10){
        cout<<i<<endl;
        i+=1;
    }
    cout<<endl;
    
    i=10;
    // DO WHILE LOOP- RUNS ATLEAST 1 TIME EVEN IF THE CONDITION IS FALSE
    do{
        cout<<i<<endl;
        i-=1;
    }while(i>=0);
    return 0;
}