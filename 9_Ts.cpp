#include<bits/stdc++.h>

using namespace std;

int cnt[10000002];
int main()
{
    int n; cin >> n;
    int a[n];
    for (int &x:a)
    {
        cin >> x;
        cnt[x] ++;
    }
    for(int i = 0 ; i < 10000002; ++ i)
        if (cnt[i] != 0)
            cout << i << ' ' << cnt[i] << endl;
    cout << endl;

    for (int i = 0 ; i < n ; ++ i)
    {
        if (cnt[a[i]] != 0)
        {
            cout << a[i] <<  ' ' << cnt[a[i]] << endl;
            cnt[a[i]] = 0;
        }
    }
    return 0; 
}