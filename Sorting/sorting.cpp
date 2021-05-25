#include<iostream>
using namespace std;

class selection{
    public: 

     void selection_sort(int arr[], int size);
     void print_array(int arr[], int size);
     void swap(int *a, int *b);
     int find_min_index(int arr[], int start, int end);

     void insertion_sort(int arr[], int size);
     };

void selection::insertion_sort(int arr[], int size)
{
    
    int key;    int i,j;
    for(i=1; i<size; i++){
            key = arr[i];
            j = i-1;

            while(j >= 0 && arr[j] > key){
                arr[j+1] = arr[j];
                j = j-1;
            }
            arr[j+1] = key;
    }
    cout<<"Insertion Sort"<<endl;
    print_array(arr, size);
}

void selection::selection_sort(int arr[], int size)
{    print_array(arr, size);
        int temp,i,j;

        for(i=0;i<size-1;i++)
        {
            for(j=i+1;j<size;j++)
            {
                if(arr[i]  > arr[j])
                {
                        temp = arr[i];
                        arr[i] = arr[j];
                        arr[j] = temp;
                }
            }
        }
        cout<<"SELECTION Sort: "<<endl;
        print_array(arr, size);

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



///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int main(){

    int n;
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    int size = sizeof(arr)/sizeof(int);
            
                selection obj;

//                obj.selection_sort(arr, size);

                obj.insertion_sort(arr, size);

                

    return 0;
}

