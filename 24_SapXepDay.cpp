#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		vector<int> v;
		int n, k;
		cin >> n >> k;
		for (int i = 0; i < n * k; i++)
		{
			long long tmp;
			cin >> tmp;
			v.push_back(tmp);
		}
		sort(v.begin(), v.end());
		for (int i = 0; i < n * k; i++)
		{
			cout << v[i] << " ";
		}
		cout << endl;
	}
}
