#include<bits/stdc++.h>

using namespace std;

int cnt_aD[10000002], cnt_aA[10000002];
int cnt_bD[10000002], cnt_bA[10000002];

int main()
{
    int n,m; cin >> n >> m;
    int a[n],b[m];
    for (int &x:a)
    {
        cin >> x;
        if (x >= 0) cnt_aD[x]++;
        else cnt_aA[-x]++;
    }

    for (int &x:b)
    {
        cin >> x;
        if (x >= 0) cnt_bD[x]++;
        else cnt_bA[-x]++;
    }

    for (int i = -10000002 ; i < 10000002 ; ++ i)
    {
        if (i < 0)
        {
            if (cnt_aA[-i] || cnt_bA[-i])
                cout << i << ' ';
        }
        else 
        {
            if (cnt_aD[i] || cnt_bD[i])
                cout << i << ' ';
        }
    }
    cout << endl;

    for (int i = -10000002 ; i < 10000002 ; ++ i)
    {
        if (i < 0)
        {
            if (cnt_aA[-i] && cnt_bA[-i])
                cout << i << ' ';
        }
        else 
        {
            if (cnt_aD[i] && cnt_bD[i])
                cout << i << ' ';
        }
    }
    return 0;
}