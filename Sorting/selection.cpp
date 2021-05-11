#include<iostream>
using namespace std;

class selection{
    public: 

     void selection_sort(int arr[], int size);
     void print_array(int arr[], int size);
     void swap(int *a, int *b);
     int find_min_index(int arr[], int start, int end);
     };


void selection::selection_sort(int arr[], int size){
        int min_index;
        int temp;

        for(int i=0; i<size;i++){
            min_index = find_min_index(arr, i, size-1);
            cout<<min_index;
            if(i!= min_index){
                // temp = arr[i];
                // arr[i] = arr[min_index];`
                // arr[min_index] = temp;
            }
        }
}
int selection::find_min_index(int arr[], int start, int end){
        int pos;
            int min = arr[0];
        for(int i=start; i<end; i++){
            if(min > arr[i+1]){
                min = arr[i+1];
                pos = i+1;
            }
        }
            return min;
}

void selection::print_array(int a[], int size){
    for(int i=0; i< size; i++){
        cout<<a[i]<<"\t";
    }
    cout<<endl;
}


void selection::swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b =  temp;
}

int main(){

    int n;
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
int size = sizeof(arr)/sizeof(int);
    selection obj;

        obj.print_array(arr, size);

        obj.selection_sort(arr, size-1);

        cout<<"SELECTION Sort: "<<endl;

        // obj.print_array(arr, size);

    return 0;
}
