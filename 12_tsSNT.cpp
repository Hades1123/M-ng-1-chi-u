#include<bits/stdc++.h>

using namespace std;

bool check(int n)
{
    for (int i = 2 ; i <= sqrt(n) ; ++ i)
    {
        if (n % i == 0)
            return false;
    }
    return n > 1;
}
int main()
{
    int n; int index = 0;
    int a[10002];
    map<int,int> mp;
    while(cin >> n)
    {
        a[index++] = n;
        if (mp[n] != 0)
            mp[n]++;
        else
        {
            if (check(n))
                mp[n]++;
        }
    }

    for(int i = 0 ; i < index ; ++ i)
    {
        if (mp[a[i]] != 0)
        {
            cout << a[i] << ' ' << mp[a[i]] << endl;
            mp[a[i]] = 0;
        }
    }
}