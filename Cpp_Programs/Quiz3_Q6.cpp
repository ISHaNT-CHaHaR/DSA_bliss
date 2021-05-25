#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void foo(int *(*p)){
    int j = 2;
    *p = &j;
    cout<<*(*p);
}


int main(){
    int i = 97, *p = &i;
    foo(&p);
    cout<<*p;
    return 0;
}
