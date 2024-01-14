#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin >> n;
    int a[n], b[n];
    for (int &x:a) cin >> x;
    for (int &x:b) cin >> x;
    sort(a, a + n);
    sort(b, b + n, greater<int>());
    int m = 0 , y = 0;
    for (int i = 0 ; i < 2*n ; ++ i)
    {
        if (i % 2 == 0)
            cout << a[m++] << ' ';
        else cout << b[y++] << ' ';
    }
}