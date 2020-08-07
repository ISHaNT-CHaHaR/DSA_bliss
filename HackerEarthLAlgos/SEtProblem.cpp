// In this problem, we define "set" is a collection of distinct numbers. For two sets  and , we define their sum set is a set . In other word,  set  contains all elements which can be represented as sum of an element in  and an element in . Given two sets , your task is to find set  of positive integers less than or equals  with maximum size such that . It is guaranteed that there is unique such set.

// Input Format

// The first line contains  denoting the number of elements in set , the following line contains  space-separated integers  denoting the elements of set .

// The third line contains  denoting the number of elements in set , the following line contains  space-separated integers  denoting the elements of set .

// Output Format

// Print all elements of  in increasing order in a single line, separated by space.



// Sample code to perform I/O:

#include <iostream>

using namespace std;
/*

// Sample code to perform I/O:

#include <iostream>

using namespace std;

int main() {
	int num;
	cin >> num;										// Reading input from STDIN
	cout << "Input number is " << num << endl;		// Writing output to STDOUT
}

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
*/

// Write your code here
void FinalSet(int a[],int c[], int a1, int c1){
	int i,j,k,x=0;
	int B[100];
		for(j=0;j<a1;j++){
			for(k=0;k<c1;k++){
				for(i=0;i<100;i++){
				  if(i + a[j] == c[k]){
					B[x] = i;
          x++;
				  }
          
			  }

		  }
	  }




	for(i=0;i<a1;i++){
		cout<<B[i]<<" ";
	}
}


int main() {
	int a1,c1,i;
	cin>>a1;
	int a[a1];
		for(i =0;i<a1;i++){
			cin>>a[i];
		}
	cin>>c1;
	int c[c1];
		for(i=0;i<c1;i++){
			cin>>c[i];
		}
	FinalSet(a,c,a1,c1);
}








