#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void run(ll n)
{
    ll a[10000] = {0};
    ll dem = 0;
    ll tmp = n;
    for (ll i = 2; i * i <= n; i++)
    {
        if (tmp % i == 0)
        {
            a[dem++] = i;
            tmp /= i;
            i--;
        };
    };
    if (tmp == n)
    {
        cout << n;
        return;
    };
    if (tmp != 1)
    {
        return run(tmp);
    };
    cout << a[--dem];
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        run(n);
        cout << endl;
    }
    return 0;
}
