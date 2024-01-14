#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,d; cin >> n >> d;
    int a[n];
    for(int &x:a) cin >> x;
    long long res = 0;
    for (int i = 1; i < n ; ++ i)
    {
        if (a[i - 1] > a[i])
        {
            long long sub = a[i - 1] - a[i];
            if (sub >= d)
            {
                int cnt = sub/d + 1;
                res += cnt;
                a[i] += cnt * d;
            }
            else
            {
                res += 1;
                a[i] += d;
            }
        }
    }
    cout << res;
}