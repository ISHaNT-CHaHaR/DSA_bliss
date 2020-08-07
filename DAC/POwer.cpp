#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int power(int p, int x)
{
    int t;
    if (x == 0)
    {
        return 1;
    }
    t = power(p, x / 2);
    if (x % 2 == 0)
    {
        return t * t;
    }
    else
    {

        return t * t * p;
    }
}

int main()
{
    int p, x;
    cout << "OK, P^x\n\n";
    cout << "Enter P and x :";
    cin >> p >> x;

    cout << power(p, x);

    return 0;
}