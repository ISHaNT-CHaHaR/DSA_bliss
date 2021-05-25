#include<iostream> 
using namespace std;

bool Palindrome(int arr[], int start, int end){
    if(start >= end){
        return 1;

    }
    if(arr[start]!=arr[end]){
            return 0;
    }
    
    
  Palindrome(arr, start+1, end-1);

  

}

int main(){

            int size;
            cin>>size;

            int a[size];
                for(int i = 0; i<size; i++){
                    cin>>a[i];
                }
            int end = sizeof(a)/sizeof(int);
                cout<<Palindrome(a, 0, end-1);


    return 0;
}