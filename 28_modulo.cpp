#include<bits/stdc++.h>

using namespace std;
#define ll long long
int main()
{
    int MOD = 1e9+7;
    long long sum = 0;
    int n; cin >> n;
    int a[n];
    for (int &x:a) cin >> x;
    sort(a, a + n);
    for (int i = 1; i < n ; ++ i)
    {
        sum += (1ll *a[i] * i) % MOD;
        sum %= MOD;
    }
    cout << sum;
}