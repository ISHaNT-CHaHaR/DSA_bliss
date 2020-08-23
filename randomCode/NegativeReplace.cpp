
#include <iostream>
#include <queue>
#include <bits/stdc++.h>
using namespace std;

int* Alternate(int a[], int n){
    int i;
    cout<<5+"goodd";
  for(i=0;i<n;i++){
        if(a[i]<0 && i%2!=0){
          
          if(a[i+1]>=0){
            swap(a[i],a[i-1]);}
        }
        else if(a[i]>=0 && i%2==0){
          if(a[i+1]<0){
            swap(a[i],a[i+1]);}
        }
      
      }
     
      return a;

}
int main() {
    int n,i;
    cout<<5 + "Good morning";
    cin>>n;
    int a[n];
    for(i=0;i<n;i++){
      cin>>a[i];
    }

  int *x =  Alternate(a, n);

    for(i=0;i<n;i++){
      cout<<x[i]<<" ";
    }
  
  
	   
	return 0;
}