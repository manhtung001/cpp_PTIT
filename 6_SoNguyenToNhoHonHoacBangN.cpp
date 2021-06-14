#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool check[10007];

void lauc()
{
    for (ll i = 2; i <= 10005; i++)
        check[i] = true;
    for (ll i = 2; i <= 10005; i++)
    {
        if (check[i] == true)
        {
            for (ll j = i * i; j <= 10005; j += i)
            {
                check[j] = false;
            }
        }
    }
}

int main()
{
    int t;
    lauc();
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        for (ll i = 2; i <= n; i++)
        {
            if (check[i] == true)
            {
                cout << i << " ";
            };
        };
        cout << endl;
    };
    return 0;
}