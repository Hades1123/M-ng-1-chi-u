#include<bits/stdc++.h>

using namespace std;

bool cmp(int a, int b)
{
    int m = a % 2;
    int n = b % 2;
    if (m == 1 && n == 1)
        return a > b;
    else if (m == 0 && n == 0)
        return a < b;
    return (a % 2) > (b % 2);
}
int main()
{
    int n; cin >> n;
    int a[n];
    for (int &x:a) cin  >> x;
    sort(a, a + n, cmp);
    for(int x:a) cout << x << ' ';
    return 0; 
}