#include<bits/stdc++.h>

using namespace std;
#define ll long long 
int cnt[1000002];

int main()
{
    int n; cin >> n;
    int a[n];
    for (int &x:a)
    {
        cin >> x;
        cnt[x] ++;
    }
    long long res = 0;
    for (int i = 0 ; i < 1000002 ; ++ i )
    {
        if (cnt[i] != 0)
            res += 1ll * cnt[i]*(cnt[i] - 1)/2;
    }
    cout << res;
    return 0;
}