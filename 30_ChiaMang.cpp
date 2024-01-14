#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,k; cin >> n >> k;
    int a[n];
    for (int &x:a) cin >> x;
    k = min(k, n - k);
    sort(a, a + n);
    long long a1 = 0, b = 0;
    for (int i = 0 ; i < k ; ++ i)
        a1 += a[i];
    for (int i = k ; i < n ; ++ i)
        b += a[i];
    cout << b - a1;
    return 0;
}