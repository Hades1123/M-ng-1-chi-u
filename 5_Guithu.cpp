#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin >> n;
    int a[n];
    for (int &x:a) cin >> x;
    
    sort(a, a + n);
    cout << abs(a[0] - a[1]) << ' '<< abs(a[0] - a[n - 1]) << endl;
    for (int i = 1 ; i < n - 1; ++ i)
    {
        cout << min(abs(a[i] - a[i - 1]) , abs(a[i] - a[i + 1])) << ' ' << max(abs(a[i] - a[0]), abs(a[i] - a[n - 1])) << endl;
    }

    cout << abs(a[n - 1] - a[n - 2]) << ' ' << abs(a[n - 1] - a[0]);
    return 0; 
}