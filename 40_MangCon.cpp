#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,m; cin >> n >> m;
    int a[n], b[m];
    for (int &x:a) cin >> x;
    for (int &x:b) cin >> x;

    int index = 0;
    for (int i = 0 ; i < n ; ++ i)
    {
        if (a[i] == b[index])
            ++index;
        if (index == m)
        {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
}