// You have been given an array of size N consisting of integers. In addition you have been given an element M you need to find and print the index of the last occurrence of this element M in the array if it exists in it, otherwise print -1. Consider this array to be 1 indexed.

// Input Format:

// The first line consists of 2 integers N and M denoting the size of the array and the element to be searched for in the array respectively . The next line contains N space separated integers denoting the elements of of the array.

// Output Format

// Print a single integer denoting the index of the last occurrence of integer M in the array if it exists, otherwise print -1.

// Sample code to perform I/O:

#include <iostream>

using namespace std;

void Linear(int arr[], int n, int m)
{
    int i, flag = 0;
    for (i = n; i > 0; i--)
    {
        if (arr[i] == m)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
    {
        cout << i + 1;
    }
    else
    {
        cout << "-1";
    }
}

int main()
{
    int num;
    cin >> num; // Reading input from STDIN
    int a[num];
    int m;
    cin >> m;
    for (int i = 0; i < num; i++)
    {
        cin >> a[i];
    }
    Linear(a, num, m);
}
