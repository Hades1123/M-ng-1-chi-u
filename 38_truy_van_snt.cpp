#include<bits/stdc++.h>

using namespace std;

bool prime[1000002];
int f[1000002];
int main()
{
    // sieve of eratosthene
    memset(prime, true, sizeof(prime));
    prime[0] = prime[1] = false;
    for (int i = 2; i < sqrt(1000001) ; ++ i)
    {
        if (prime[i])
        {
            for (int j = i*i ; j < 1000001; j+= i )
                prime[j] = false;
        }
    }
    // end the algorithm

    f[0] = f[1] = 0;
    for (int i = 1 ; i < 1000001 ; ++ i)
    {
        if (prime[i])
            f[i] = f[i - 1] + 1;
        else 
            f[i] = f[i - 1];
    }

    int q;
    cin >> q;
    while(q -- )
    {
        int left, right;
        cin >> left >> right;
        if (left == 1)
            cout << f[right] << endl;
        else 
            cout << f[right] - f[left - 1] << endl;
    }
   
    return 0;
}