#include<iostream>
using namespace std;

#define foo(x,y) x/y + x 

int main(){

    
    int i= -6, j = 3;
    cout<<foo(i+j, 3)<<endl;

    return 0;
}