#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		vector<long> v;
		long k, n;
		cin >> n;
		for (long i = 0; i < n; i++)
		{
			cin >> k;
			if (k > 0)
			{
				v.push_back(k);
			}
		}
		if (v.size() > 0)
		{
			sort(v.begin(), v.end());
			if (v[0] != 1)
			{
				cout << 1;
			}
			else
			{
				long i = 0;
				while (v[i] + 1 == v[i + 1] || v[i] == v[i + 1])
					i++;
				if (i == v.size())
				{
					cout << v[i - 1] + 1;
				}
				else
				{
					cout << v[i] + 1;
				}
			}
		}
		else
		{
			cout << 1;
		}
		cout << endl;
	}
}