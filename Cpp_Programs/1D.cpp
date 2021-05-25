#include<iostream>

using namespace std;

// int f1(int a[]){
//     return a[4];
// }

// int* f2(int *a){  // This is how I can accept an array too.
//     return &a[1];
// }

int main(){

    int a[] = {1,2,3,4,5};

    for(int j =0 ;j< 5; j++){
        cout<<*a;
        //a++;  expression must be a modifiable value.
     }



//     int *p = (a+2);

//     cout<<f1(a) + *f2(a)<<endl;

//     cout<<*a<<endl;
//     cout<<*(a+2)<<endl;
// p++;
//     cout<<*p<<endl;
//     p = p-2;
//     cout<<*p<<endl;
    return 0;
}