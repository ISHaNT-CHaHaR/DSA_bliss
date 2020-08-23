#include <iostream>

#include <bits/stdc++.h>
using namespace std;


int method1(int a[], int b[], int n){
  int i,j;
  int len=0;
  int m =0 ;
  for(i=0;i<n;i++){
    int sum1=0;
    int sum2 =0;
    for(j=i;j<n;j++){
      sum1+=a[i];
      sum2+=b[i];

      if(sum1 == sum2){
        len = j-i+1;
      
    }
    m = max(len,m);
  }
}
return m;
}
int main() {
   int n,m;
   cin>>n;
   int i;
   int a[n],b[n];
   for( i=0;i<n;i++){
     cin>>a[i];
   }
   cout<<"2nd\n";
   for(i=0;i<n;i++){
     cin>>b[i];
   }

    m = method1(a,b,n);
    cout<<"Longest Spanning sum : "<<m;
  
	   
	return 0;
}