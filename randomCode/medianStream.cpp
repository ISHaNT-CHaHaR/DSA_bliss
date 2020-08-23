// Find median in a stream
// Given an input stream of N integers. The task is to insert these numbers into a new stream and find the median of the stream formed by each insertion of X to the new stream.

// Input:
// The first line of input contains an integer N denoting the number of elements in the stream. Then the next N lines contains integer x denoting the number to be inserted into the stream.
// Output:
// For each element added to the stream print the floor of the new median in a new line.

/// My solution. 
#include <iostream>
using namespace std;
int main() {

        long long N;
        cin>>N;
        long long sum=0;
        long long x[N];
            for(int i=1;i<=N;i++){
                cin>>x[i];
                sum+=x[i];
                cout<<(sum/i)<<"\n";
            }
            
        
        

	return 0;
}