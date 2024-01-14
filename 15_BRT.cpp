#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin >> n;
    long long a[n];
    for (long long &x:a) cin >> x;
    sort(a,a + n);
    long long  minDis = LLONG_MAX;
    int cnt = 0;

    for (int i = 1 ; i < n ; ++ i)
    {
        minDis = min(minDis, abs(a[i] - a[i - 1]));
    }
    for (int i = 1 ; i < n ; ++ i)
    {
        if (abs(a[i] - a[i - 1]) == minDis)
            ++cnt;
    }
    cout << minDis << ' ' << cnt;
    return 0;   
}