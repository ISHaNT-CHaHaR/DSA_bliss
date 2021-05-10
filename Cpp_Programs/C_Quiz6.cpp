#include<iostream>
using namespace std; 


struct p{
    int x;
    int y;

};
int fun(int n){
    if(n==0|| n==1){
        return n;
    }
    if(n%3 != 0){
        return 0;
    }
    return fun(n/3);
}


int main(){


        // struct p p1[] = {1,2,3,4,5};
        // struct p *ptr = p1;
        // cout<<ptr->x<<(ptr+2)->y;


        // int p = 10, q = 20, r;

        // if(r = p = 5 || q>20){
        //     cout<<r<<endl;
        // }else{
        //     cout<<"NO Output!";
        // }


        // int y = 0;
        // if(1 || (y=1)){
        //     cout<<y;
        // }
        // else
        //     cout<<"0 "<<y;

        // cout<<y;


    //     int x = 3;
    //    int  y =2;
 
    //    int z = x<<1>5;
        
    //    cout<<z<<endl;


    // int b = 5 & 3 && 4 || 5 | 6;
    // cout<<(5&3)<<endl;
    // cout<<(5|6)<<endl;
    // cout<<((4)&&0)<<endl;

  
    // cout<<b<<endl;

    cout<<fun(9);
    
    return 0;
}