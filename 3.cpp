#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin >> n;
    int a[n];
    for (int &x:a) cin >> x;
    cout << a[0] << ' ';
    int maxNum = a[0];
    for (int i = 1 ; i< n ; ++ i)
    {
        if (a[i] > maxNum)
        {
            cout << a[i] << ' ';
            maxNum = a[i];
        }
    }
    return 0;
}