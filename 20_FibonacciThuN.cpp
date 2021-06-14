#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
	int t;
	cin >> t;
	long long k = 1000000007;
	while (t--)
	{
		ll n;
		cin >> n;
		if (n == 0)
		{
			cout << 0;
		}
		else if (n == 1)
			cout << 1;
		else
		{
			ll a = 0;
			ll b = 1;
			ll c = 1;
			for (ll i = 0; i <= n - 2; i++)
			{
				a = a % k;
				b = b % k;
				c = a + b;
				c = c % k;
				a = b;
				b = c;
			}
			cout << c;
		}

		cout << endl;
	}
}