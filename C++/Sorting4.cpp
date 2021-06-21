#include <bits/stdc++.h>
using namespace std;
int n, m, a[100005];
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		cin >> n >> m;
		int d[100005] = {0};
		for (int i = 0; i < n + m; i++)
		{
			cin >> a[i];
			d[a[i]]++;
		}
		for (int i = 0; i <= 100000; i++)
		{
			if (d[i] > 0)
				cout << i << " ";
		}
		cout << endl;
		for (int i = 0; i <= 100000; i++)
		{
			if (d[i] > 1)
				cout << i << " ";
		}
		cout << endl;
	}
}
