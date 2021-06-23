#include <bits/stdc++.h>
using namespace std;

int n, a[1000005];
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		cin >> n;
		int d[1000005];
		memset(d, 0, sizeof(d));
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
			if (a[i] > 0)
				d[a[i]] = 1;
		}
		for (int i = 1; i <= 1000000; i++)
		{
			if (d[i] == 0)
			{
				cout << i << endl;
				break;
			}
		}
	}
}
