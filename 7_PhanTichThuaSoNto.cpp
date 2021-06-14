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
		ll k = n;
		for (ll i = 2; i <= sqrt(k); i++)
		{
			if (k % i == 0)
			{
				cout << i << " ";
			}
			ll dem = 0;
			while (k % i == 0)
			{
				dem++;
				k /= i;
			}
			if (dem > 0)
			{
				cout << dem << " ";
			}
		}
		if (k > 1)
		{
			cout << k << " " << 1;
		}
		cout << endl;
	};
	return 0;
}