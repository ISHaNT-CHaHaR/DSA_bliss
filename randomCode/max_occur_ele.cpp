#include <iostream>

#include <bits/stdc++.h>
using namespace std;


int findCandidate(int a[], int n){
  int m_index = 0, count =1;
  int i;
  for(i=1;i<n;i++){
    if(a[m_index] == a[i]){ 
      count++;
    }else{
      count--;
    }

    if(count == 0){
      m_index = i;
      count = 1;
    }
  }
  return a[m_index];
}

bool isMajority(int a[],int n, int cand){
  int i, count =0;
  for(i=0;i<n;i++){
    if(a[i] == cand)
        count++; }

    if(count >=n/2)
          return i;
    else 
      return 0;
 
  return -1;
}

void majority(int a[], int n){
  int cand = findCandidate(a,n);
  
  if(isMajority(a, n, cand)){
    cout<<"::::::      ::::"<<cand;
  }else{
    cout<<"No Majority!";
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

  majority(a , n);
    
   
     
	return 0;
}