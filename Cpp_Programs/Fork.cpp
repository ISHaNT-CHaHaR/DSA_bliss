#include<iostream>
#include<unistd.h>

using namespace std;

int main(){

    // if(fork()){
    //     cout<<1;
    // }
    // else {
    //     cout<<2;
    // }

    // cout<<3<<endl;

    if(fork() || fork()){
        if(fork() || fork())
           cout<<1<<endl;
        cout<<2<<endl;
    }
   

    return 0;
}