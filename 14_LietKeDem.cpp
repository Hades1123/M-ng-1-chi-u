#include<bits/stdc++.h>
using namespace std;

bool check(string s)
{
    for (int i = 1 ; i < s.size() ; ++ i)
    {
        if (s[i] < s[i - 1])
            return false;
    }
    return true;
}

bool cmp(pair<string,int> a , pair<string,int> b)
{
    if (a.second == b.second)
    {
        if (a.first.size() == b.first.size())
            return a < b;
        else
            return a.first.size() < b.first.size();
    }
    return a.second > b.second;
}
vector<pair<string,int>> v;
int main()
{
    
    string s;
    map<string,int> mp;
    while(cin >> s)
    {
        if (mp[s] != 0)
            ++mp[s];
        else
        {
            if (check(s))
            {
                mp[s]++;
            }
        }
    }
    for(auto it:mp)
    {
        v.push_back({it.first, it.second});
    }
    sort(v.begin(), v.end() , cmp);
    for(auto it:v)
        if (it.second != 0)
            cout << it.first << ' ' << it.second << endl;
    
    return 0;
}