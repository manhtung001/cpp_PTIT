#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

using namespace std;

bool check[1000005];

void lauc()
{
	for (ll i = 2; i <= 1000005; i++)
		check[i] = true;
	for (ll i = 2; i <= 1000005; i++)
	{
		if (check[i] == true)
		{
			for (ll j = i * i; j <= 1000005; j += i)
			{
				check[j] = false;
			}
		}
	}
}

int main()
{
	lauc();
	int t;
	cin >> t;
	while (t--)
	{
		ll n;
		cin >> n;
		for (ll i = 2; i <= sqrt(n); i++)
		{
			if (check[i] == true)
			{
				cout << i * i << " ";
			}
		}
		cout << endl;
	}
}
