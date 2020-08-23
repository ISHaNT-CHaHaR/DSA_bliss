#include <iostream>

#include <bits/stdc++.h>
using namespace std;

void replace(int a[],int n){
  int i,j;
    int m = a[n-1];
    a[n-1] = -1;
    
  for(i=n-2;i>=0;i--){
      int t = a[i];
          a[i] = m;

          if(m<t){
            m =t;
            
          }

        }
  for(i=0;i<n;i++){
       cout<<a[i]<<" : ";
     }
}

int main() {
    int n;
    cin>>n;
    int a[n];

    int i,j;
    for(i=0;i<n;i++){
      cin>>a[i];
    }

    replace(a,n);
    
   
     
	return 0;
}