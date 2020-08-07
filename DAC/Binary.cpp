#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int Binary(int arr[], int i, int n, int k)
{

    if (i <= n)
    {
        int mid = n - 1 / 2;
        int f;
        if (arr[mid] == k)
        {
            return mid;
        }
        else if (arr[mid] > k)
        {
            return Binary(arr, 0, mid - 1, k);
        }
        else
        {
            return Binary(arr, mid + 1, n, k);
        }
    }
    return -1;
}

int main()
{
    int n, k, f;
    cout << "Enter Size of array : ";
    cin >> n;
    int a[n];
    cout << "Enter Elements : ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cout << "\n Enter Search element : ";
    cin >> k;
    f = Binary(a, 0, n - 1, k);
    if (f)
    {
        cout << "Found at : " << f + 1;
    }

    return 0;
}