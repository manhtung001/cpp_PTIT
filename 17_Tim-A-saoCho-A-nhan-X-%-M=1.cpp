#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, m;
        cin >> a >> m;
        bool b = true;
        for (int i = 0; i < m; i++)
        {
            if ((i * a) % m == 1)
            {
                b = false;
                cout << i << endl;
                break;
            }
        }
        if (b)
        {
            cout << -1 << endl;
        }
    }
}