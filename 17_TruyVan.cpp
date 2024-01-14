#include<bits/stdc++.h>

using namespace std;

long long f[1000002];
int main()
{
    
    int n; cin >> n;
    int a[n];
    for (int &x:a) cin >> x;
    f[0] = a[0];
    for (int i = 1 ; i < n ; ++ i)
        f[i] = a[i] + f[i - 1];
    int q; cin >> q;
    while(q --)
    {
        int l,r;
        cin >> l >> r;
        if (l == 1)
            cout << f[r - 1] << endl;
        else
            cout << f[r - 1] - f[l - 2] << endl;
    }
    return 0;
}