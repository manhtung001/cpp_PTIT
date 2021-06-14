#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

using namespace std;

ll laucher(ll n, ll k)
{
	ll res = 0;
	for (int i = 1; i <= n; i++)
	{
		res += (i % k);
	}
	return res;
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		ll n, k;
		cin >> n >> k;
		cout << laucher(n, k) << endl;
	}
}
