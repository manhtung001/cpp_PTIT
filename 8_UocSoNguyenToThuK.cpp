#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		ll n, k;
		cin >> n >> k;
		if (k > n)
		{
			cout << -1 << endl;
			continue;
		}
		k -= 1;
		ll arr[n + 1], index = 0;
		memset(arr, 0, sizeof(arr));
		for (ll i = 2; i <= n; i++)
		{
			while (n % i == 0)
			{
				arr[index++] = i;
				n /= i;
			}
		}
		cout << (arr[k] > 0 ? arr[k] : -1) << endl;
	}
}
