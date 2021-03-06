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
			int s;
			cin >> s;
			v.push_back(s);
		}
		cout << v[0] * v[1] << " ";
		for (int i = 1; i < v.size() - 1; i++)
		{
			cout << v[i - 1] * v[i + 1] << " ";
		}
		cout << v[v.size() - 1] * v[v.size() - 2] << endl;
		cout << endl;
	}
}