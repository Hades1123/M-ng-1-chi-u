#include<bits/stdc++.h>

using namespace std;

int cnt[1000002];

int main()
{
    int n; cin >> n;
    int a[n];
    for (int &x:a) cin >> x;
    bool loop = false;
    for (int x:a)
    {
        if (cnt[x] == 1)
        {
            cout << x;
            loop = true;
            break;
        }
        else cnt[x] = 1;
    }
    if (loop == false) cout << -1;
}