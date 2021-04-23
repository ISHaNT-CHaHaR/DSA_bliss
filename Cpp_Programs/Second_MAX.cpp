#include<iostream>
using namespace std;

int second_MAX(int *a, int size){
   

    if(size == 0){
        return a[size];}


    int temp = second_MAX(a, size-1);

    if(a[size] > temp){
        return a[size];
    }else{
    return temp;}
    
}
void Second_MAX(int *a, int size){
    int max = a[0];

    for(int i=0; i<size; i++){
        if(a[i]> max){
            max = a[i];
        }
    }
     
     int s_max = a[0];
     for(int i = 0; i<size; i++){
         if(a[i]> s_max && a[i]<max){
             s_max = a[i];
         }
     }
    cout<<max<<endl<<s_max<<endl;
}

int original(int a[], int size, int max)
{
        if(size == 0){
            return a[size];
        }
        int temp = original(a, size-1, max);

        if(a[size] > temp && a[size] < max){
            return a[size];
        }
        else{
            return temp;
        }
}
int main(){
    int a[]= {1,5,2,4,3};
    int size =  sizeof(a)/sizeof(int);

    int F_MAx = second_MAX(a, size-1);

    cout<<original(a, size-1, F_MAx)<<endl;

    Second_MAX(a, size-1);

    return 0;
}