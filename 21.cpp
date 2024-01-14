#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    int even = 0, odd = 0;
    while(cin >> x)
    {
        if (x % 2 == 0)
            ++even;
        else ++odd;
    }
    if ((even > odd) && ((even + odd) % 2 == 0) || (even < odd) && ((even + odd) % 2 == 1))
        cout << "YES";
    else cout << "NO";
}