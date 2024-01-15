#include<bits/stdc++.h>

using namespace std;

#define ll long long
map <ll, ll > mp;
bool check(int a[], int n)
{
    ll sum = 0;
    for (int i = 0 ; i < n ; ++ i)
    {
        sum += a[i];
        if (sum == 0 || mp.count(sum))
            return true;
        mp[sum] = 1;
    }
    return false;
}
int main()
{

    int n; cin >> n;
    int a[n];
    for (int &x:a) cin >> x;
    cout << (check(a,n) == true ? 1:-1);
}