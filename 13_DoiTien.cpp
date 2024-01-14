#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long n; cin >> n;
    long long res = 0;
    int a[] = {1,2,5,10,20,50,100,200,500,1000};
    int index = 9;

    while(index != -1 && n != 0)
    {
        res += n/a[index];
        n %= a[index];
        index--;
    }
    cout << res;
    return 0;
}