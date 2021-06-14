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
		int nho = 0;
		int lon = n - 1;
		while (lon > nho)
		{
			cout << v[lon] << " " << v[nho] << " ";
			lon--;
			nho++;
		}
		if (lon == nho)
		{
			cout << v[lon];
		}
		cout << endl;
	}
}
