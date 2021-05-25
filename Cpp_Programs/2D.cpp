#include<iostream>
using namespace std;

int f1(int a[2][3], int rows){
    a[0][0] = 10;
    return a[0][0];

}


int main(){
    int a[][3] = {{1,5,2},{7,6,8}};
    cout<<f1(a, 2)<<endl;
    
    return 0;
}
