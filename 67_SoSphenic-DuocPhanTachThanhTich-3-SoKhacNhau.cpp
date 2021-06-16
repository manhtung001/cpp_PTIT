#include <bits/stdc++.h>

using namespace std;

bool find(long n)
{
	if (n < 2)
	{
		return false;
	}
	long k = n;
	long c = 0;
	for (int i = 2; i < n; i++)
	{
		if (k % i == 0)
		{
			c++;
			k /= i;
			if (k % i == 0)
			{
				return false;
			}
			if (c > 3)
			{
				return false;
			}
		}
	}
	return c == 3;
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		long n;
		cin >> n;
		cout << find(n);
		cout << endl;
	}
}