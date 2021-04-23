#include<iostream>

using namespace std;

int f1(int a, int b){
    return a*b;
}

int f1( float a, float b){
    return a*b;
}
float f1(int a){
    return a;
}

int f1(int a, float b, int c){
    return a+b+c;
}

int main(){

    int a,b,c;
    float x,y,z;

    cout<<f1(5.5)<<endl;
    cout<<f1(4,5)<<endl;
    cout<<f1(4.5,2.5,4)<<endl;
    cout<<f1(1.1,4)<<endl;

    return 0;
}