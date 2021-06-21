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
		vector<int> v;
		for (int i = 0; i < n; i++)
		{
			int k;
			cin >> k;
			v.push_back(k);
		}
		sort(v.begin(), v.end());
		long minn = INT_MAX;
		for (int i = 0; i < n - 1; i++)
		{
			long z = v[i + 1] - v[i];
			if (z < minn)
			{
				minn = z;
			}
		}
		cout << minn << endl;
	}
}
