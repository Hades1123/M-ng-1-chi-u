#include<bits/stdc++.h>

using namespace std;
#define ll long long
int main()
{
    int n, k; cin >> n >> k;
    int a[n];
    for (int &x:a) cin >> x;
    map<ll,ll> mp;

    ll sum = 0;
    ll res = 1e9;
    mp[0] = -1;
    for (int i = 0 ; i < n ; ++ i)
    {
        sum += a[i];
        if (mp.count(sum - k))
        {
            res = min(res,i - mp[sum - k]);
        }
        mp[sum] = i;
    }
    if (res == 1e9)
        cout << - 1;
    else cout << res;
    return 0;
}