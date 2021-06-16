#include <bits/stdc++.h>
using namespace std;
int m = 1e9 + 7;
long long a[1005][1005];
int main()
{
	int t;
	cin >> t;
	for (int i = 1; i <= 1000; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			if (i == j || j == 0)
				a[i][j] = 1;
			else
				a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
			a[i][j] %= m;
		}
	}
	while (t--)
	{
		int n, k;
		cin >> n >> k;
		cout << a[n][k] << endl;
	}
}
