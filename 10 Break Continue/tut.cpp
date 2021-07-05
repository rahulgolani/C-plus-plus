#include<iostream>
using namespace std;

int main(){
    for (int i = 0; i < 10; i++)
    {
        if (i==1){
            continue;//skips the iteration
        }

        cout<<i<<endl;


        if (i==2){
            break;//comes out of the loop
        }
    }
    
    return 0;
}