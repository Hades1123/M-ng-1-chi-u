#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin >> n;
    int a[n];
    for (int &x:a) cin >> x;
    int m_100 = 0, m_50 = 0, m_25 = 0;

    bool ok = true;

    for (int i = 0 ; i < n ; ++ i)
    {
        if (a[i] == 25)
        {
            ++m_25;
        }
        else if (a[i] == 50)
        {
            --m_25;
            ++m_50;
        }
        else
        {
            ++m_100;
            if (m_50 > 0 && m_25 > 0)
            {
                --m_50;
                --m_25;
                ++m_100;
            }
            else if (m_25 >= 3)
            {
                m_25 -= 3;
                ++m_100;
            }
            else 
            {
                ok = false;
                break;
            }
        }
        if (m_25 < 0 || m_50 < 0)
        {
            ok = false;
            break;
        }
    }
    cout << (ok == true ? "YES":"NO");
    return 0;
}