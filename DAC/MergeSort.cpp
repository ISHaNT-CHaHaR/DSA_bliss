#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void merge(int arr[], int l, int m ,int h){
    int i,j,k;
    int n1 = m - l +1;
    int n2 = h - m;

   
      int L[n1], R[n2]; 
  
  
        for (i = 0; i < n1; i++) 
            L[i] = arr[i+l]; 
        for (j = 0; j < n2; j++) 
            R[j] = arr[m + 1 + j]; 

    i=0;j=0;k=l;
    while(i< n1 && j < n2){
      if(L[i] <= R[j]){
        arr[k] = L[i];
        i++;
      }else{
        arr[k] = R[j];
        j++;
      }
      k++;
    }



    while(i<n1){
      arr[k] = L[i];
      i++;k++;
    }
    while( j < n2){
      arr[k] = R[j];
        j++;k++;
    }
}

void mergeSort(int arr[], int l, int h){
  if(l<h){
     
      int mid = (h+l)/2;
      mergeSort(arr,l,mid);
      mergeSort(arr,mid+1,h);

      merge(arr, l, mid ,h);
      
  }
}

int main(){
    int n,k,f;
    cout<<"Enter Size of array : ";
    cin>>n;
    int a[n];
    cout<<"Enter Elements : ";
    for(int i=0;i<n;i++){
      cin>>a[i];
    }

    
    mergeSort(a, 0, n-1);

    cout<<"After Sorting"<<"\n";
    for(int i;i<n;i++){
      cout<<a[i]<<"\t";
    }

  return 0;
}