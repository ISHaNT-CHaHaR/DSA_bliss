#include<iostream>
using namespace std;

void callByValue(int a, int b){
    int t;
    t = a;
    a = b;
    b = t;
}

void callByReference(int *a, int *b){
    int *t;
    t = a;
    a = b;
    b = t;
}
int main(){

    // int a,b;
    // int *p,*q;

    // a =10; b=9;
    
    // callByValue(a,b);
    // cout<<a<<" "<<b<<endl; 

    // p = &a;
    // q = &b;

    // callByReference(p,q);
    // cout<<*p<<" "<<*q<<endl;


    // if((10/3.0)*3 == 10){
    //     cout<<"One";
    // }
    // else{
    //     cout<<"Two";
    // }



    // int x = 16;
    // int *p = &x;
    // char *pc;
    // pc = (char*)p;

    // cout<<*pc<<*p;


   


    return 0;
}