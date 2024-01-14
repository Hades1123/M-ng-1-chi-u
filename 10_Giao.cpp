#include<bits/stdc++.h>

using namespace std;

int cnt_a[10000002];
int cnt_b[10000002];

int main()
{
    int n,m; cin >> n >> m;
    int a[n], b[m];
    for (int &x:a)
    {
        cin >> x;
        cnt_a[x] = 1;
    }
    for (int &x:b)
    {
        cin >> x;
        cnt_b[x] = 1;
    }

    for (int i = 0 ; i < 10000002; ++ i)
        if (cnt_a[i] ==  1 && cnt_b[i] == 1)
            cout << i << ' ' ;
    cout << endl;
    for (int i = 0 ; i < 10000002; ++ i)
        if (cnt_a[i] ==  1 || cnt_b[i] == 1)
            cout << i << ' ' ;
    return 0;
}