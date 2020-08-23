#include <iostream>

#include <bits/stdc++.h>
using namespace std;

int oddTimes(int arr[], int n){
  int i,j=1, odd;
    sort(arr, arr+n);


    for(i=0;i<n;i++){
      if(arr[i] == arr[i+1])
          j++;
      else{
        if(j%2==0)
          j=1;
        
        else{
          odd = arr[i];
          j=1;
        }
      
      }
    }
    return odd;
}


int oddTimesXor(int arr[], int n){
  int i,res=0;
  for(i=0;i<n;i++){
    res = res ^ arr[i];
  }
  return res;
}



int main() {
    int n;
    cin>>n;
    int a[n];

    int i,j;
    for(i=0;i<n;i++){
      cin>>a[i];
    }

    int odd = oddTimes(a,n);
    int oddXor = oddTimesXor(a,n);
      cout<<"::::::::::"<<odd<<endl;
      cout<<"::::::::::::"<<oddXor<<endl;
	return 0;
}