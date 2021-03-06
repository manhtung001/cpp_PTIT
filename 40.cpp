#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		long n;
		cin >> n;
		vector<long> v;
		for (int i = 0; i < n - 1; i++)
		{
			long z;
			cin >> z;
			v.push_back(z);
		}
		sort(v.begin(), v.end());
		long i = 0;
		while (v[i] == i + 1)
		{
			i++;
		}
		cout << i + 1;
		cout << endl;
	}
}
