#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int floorRoot(int k){
  if(k ==0 || k==1){
    return k;
  }
  int l=1,r=k,result;
  while(l<=r){
    int mid = (l+r)/2;
    if(mid*mid == k){
      return mid;
    }
    if(mid*mid<k){
      l = mid+1;
      result  = mid;
    }
    else{
      r =mid-1;
    }
  }
  return result;
}

int main()
{
    int n, k, f;
    n=1;
    k = floorRoot(n);
    cout<<k;
}