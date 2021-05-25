#include<iostream>

using namespace std;


// void foo(int *p){
//     cout<<*p<<endl;
// }
int main(){
   
//     int i = 45;

//        int  *p = &i;

//     foo(p++);
//     cout<<p<<endl;
//     cout<<++p<<endl;
// cout<<p++<<endl;

        int x = 1;
        char *c = (char*) &x;
            printf("%d", *c);
        cout<<*c<<endl;

 
    return 0;
}