#include <bits/stdc++.h>

using namespace std;

void sinhXNP(int n)
{
	int a[n + 5];
	for (int i = 1; i <= n; i++)
	{
		a[i] = 0;
	}
	while (1)
	{
		for (int i = 1; i <= n; i++)
		{
			cout << a[i];
		}
		cout << " ";
		int i = n;
		while (i > 0 && a[i] == 1)
		{
			a[i] = 0;
			i--;
		}
		if (i == 0)
			return;
		else
			a[i] = 1;
	}
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		sinhXNP(n);
		cout << endl;
	}
}
