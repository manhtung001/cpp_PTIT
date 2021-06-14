#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		vector<int> v;
		int n;
		cin >> n;
		long long max = -1;
		for (int i = 0; i < n; i++)
		{
			long long a;
			cin >> a;
			if (a > max)
				max = a;
		}
		cout << max << endl;
	}
}