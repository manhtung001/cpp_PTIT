#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		int a[n];
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		int id = 1;
		long long res = 0;
		while (id <= n)
		{
			for (int i = 0; i <= n - id; i++)
			{
				long long max = 1;
				for (int j = i; j < i + id; j++)
				{
					max *= a[j];
				}
				if (max > res)
				{
					res = max;
				}
			}
			id++;
		}
		cout << res << endl;
	}
}