#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin >> n;
    int a[n];
    for (int &x:a) cin >> x;

    sort(a, a + n);
    long long res_1 = 0 , res_2 = 0;
    if (n % 2 == 0)
    {
        for (int i = 0 ; i < n ; ++ i)
        {
            if (i % 2 == 0)
                res_1 = res_1 * 10 + a[i];
            else res_2 = res_2 * 10 + a[i];
        }
    }
    else
    {
        for (int i = 0 ; i < n - 1 ; ++ i)
        {
            if (i % 2 == 0)
                res_1 = res_1 * 10 + a[i];
            else res_2 = res_2 * 10 + a[i];
        }
        res_1 = res_1 * 10 + a[n - 1];
    }
    cout << res_1 + res_2;
    return 0;
}