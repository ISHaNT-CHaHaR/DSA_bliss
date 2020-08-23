#include <iostream>

#include <bits/stdc++.h>
using namespace std;

int fixedPoint1(int arr[], int  n){
        int i=0,j;
        while(i<n){
          if(arr[i]==i){
              j = arr[i];
          }
          i++;
        }
        return j;
}


int fixedPoint2(int arr[], int l,int n){
  int mid;
    if(l<=n){
      mid = (l + n)/2;

      if(mid == arr[mid]){
        return mid;
      } 
      else if(mid > arr[mid]){
        return fixedPoint2(arr, mid +1, n );

      }
      else 
       return fixedPoint2(arr, l, mid-1);
    }
    return -1;

}
int main() {
    int n;
    cin>>n;
    int a[n];

    int i,j;
    for(i=0;i<n;i++){
      cin>>a[i];
    }

      int m = fixedPoint1(a,n-1);
      j = fixedPoint2(a,0,n);

	   cout<<":::::::::::"<<m<<endl;
     cout<<":::::::::::"<<j;
	return 0;
}