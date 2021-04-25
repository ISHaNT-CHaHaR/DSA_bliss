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

    // if(fork() || fork()){
    //     if(fork() || fork())
    //        cout<<1<<endl;
    //     cout<<2<<endl;
    // }

    // if(fork()){
    //     if(!fork()){
    //         fork();
    //         cout<<" 1 ";
    //     }else{
    //         cout<<" 2 ";
    //     }

    // }else{
    //     cout<<" 3 ";
    // }
    // cout<<" 4 ";
int c =0;
    fork();
    for(int i=0;i<2;i++){
        fork();
        cout<<" *  ";
        
    }


   

    return 0;
}