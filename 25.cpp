#include<bits/stdc++.h>

using namespace std;

int main()
{
    int cnt[3] = {0};
    int n; cin >> n;
    while(n --)
    {
        int x; cin >> x;
        cnt[x]++;
    }
    for (int i = 0 ; i < 3 ; ++ i)
    {
        for (int j = 0 ; j < cnt[i] ; ++ j)
            cout << i << ' ';
    }
}