
// Sample code to perform I/O:

#include <iostream>
#include <ctime>
using namespace std;

int randomBsearch(int arr[], int l, int h, int x)
{
    if (l < h)
    {
        srand(time(NULL));
        int mid = (rand() % (h - l + 1));

        // int randNum = rand()%(max-min + 1) + min;
        if (arr[mid] == x)
            return mid;

        else if (arr[mid] > x)
            return randomBsearch(arr, l, mid - 1, x);

        else
            return randomBsearch(arr, mid + 1, h, x);
    }
    return -1;
}

int main(void)
{
    int n, a;
    cout << "Enter Array Size : ";
    cin >> n;

    int arr[n];

    cout << "Enter Elements : ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int x;
    cout << "Enter element to be searched : ";
    cin >> x;

    a = randomBsearch(arr, 0, n - 1, x);

    if (a != -1)
        cout << "Found at : " << a + 1;

    else
        cout << "Not found!";

    return 0;
}
