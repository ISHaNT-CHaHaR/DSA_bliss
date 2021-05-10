#include<iostream>
using namespace std; 

void foo(int *);
int main(){

        // char c[] = "workhard";
        // char *p = c;
        // cout<< p + p[2] - p[1] + 1;


        // int arr[] = {1,2,3,4,5};
        // int *p = arr;
        // ++*p;   /// ++*p = *p;
        // p+=2;
        // cout<<*p;

        int i = 50, *p = &i; 

        foo(p++);




    return 0;
}

void foo(int *p){
    cout<<p+1;
}