#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k; cin >> n >> k;
    int a[n];
    for(int &x:a) cin  >> x;
    sort(a, a + n);
    int ans = 0;

    for (int i = 0 ; i < n ; ++ i)
    {
        int idx = upper_bound(a + i , a + n, a[i] + k)  - a;
        ans = max(ans, idx - i);
    }
    cout << ans;
    return 0;
}