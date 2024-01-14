#include<bits/stdc++.h>

using namespace std;

int ucln(int a, int b)
{
    while(b)
    {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}
int main()
{
    int n; cin >> n;
    int a[n];
    long long cnt = 0;
    for (int &x:a) cin  >> x;

    for (int i = 0 ; i < n - 1 ; ++ i)
    {
        for (int j = i + 1 ; j < n; ++ j)
        {
            if (ucln(a[i], a[j]) == 1)
                ++cnt;
        }
    }
    cout << cnt;
    return 0; 
}