#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int floorRoot(int k){
  if(k ==0 || k==1){
    return k;
  }
  int i;
  int x;
  for(i=1;i*i<=k;i++){
        
  }
  return i-1;
}

int main()
{
    int n, k, f;
    n=89;
    k = floorRoot(n);
    cout<<k;
}