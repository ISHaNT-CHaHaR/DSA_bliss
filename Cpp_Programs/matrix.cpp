#include<iostream>
using namespace std;

int main(){

    int a[3][3] = {{1,2,7},{4,0,9},{7,8,9}};

    int *p = a[1];
    cout<<*p<<endl;

    *p++;
cout<<*p<<endl;

    ++*p;
cout<<*p<<endl;

    
    
    

    return 0;
}