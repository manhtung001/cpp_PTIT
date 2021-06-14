#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> a;
        for (ll i = 1; i <= n; i++)
        {
            ll tmp;
            cin >> tmp;
            if (tmp > 0)
            {
                a.push_back(tmp);
            }
        }

        int check = 0;

        for (ll i = 1; i <= n; i++)
        {
            if (a[i] == 0)
            {
                check = 1;
                cout << i;
                break;
            }
        }

        if (check == 0)
        {
            cout << n + 1;
        }

        cout << endl;
    }
}
