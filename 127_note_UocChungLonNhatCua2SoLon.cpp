#include <bits/stdc++.h>
using namespace std;
long long tmp(string a, long long b)
{
    long long res = 0;
    for (int i = 0; i < a.length(); i++)
    {
        res = (res * 10 + a[i] - '0') % b;
    }
    return res;
}

long long gcd(long long a, long long b)
{
    if (b == 0)
    {
        return a;
    }
    return gcd(b, a % b);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string b;
        long long a;
        cin >> a >> b;
        cout << gcd(tmp(b, a), a) << endl;
    }
}
