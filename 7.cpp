#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int a[n + 1], k = n;
	memset(a, 0, sizeof(a));
	for (int i = 2; i * i <= k; i++)
	{
		while (k % i == 0)
		{
			a[i]++;
			k /= i;
		}
	}
	for (int i = 2; i <= n; i++)
	{
		if (a[i] > 0)
		{
			cout << i << " " << a[i] << " ";
		}
	}
	cout << endl;
}