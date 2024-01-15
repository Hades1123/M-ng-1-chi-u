#include<bits/stdc++.h>

using namespace std;
#define ll long long
int main()
{
    int n, k; cin >> n >> k;
    int a[n];
    for (int &x:a) cin >> x;
    map<ll,ll> mp;
    ll res = LLONG_MIN;

    for (int i = 0 ; i < n ; ++ i)
    {
        if (mp.count(a[i] + k))
            res = max(res, i - mp[a[i] + k]);
        if (mp.count(a[i] - k))
            res = max(res, i - mp[a[i] - k]);
        
        if (mp.count(a[i]) == 0)
            mp[a[i]] = i;
    }
    cout << (res == LLONG_MIN ? -1:res);
    return 0;
}