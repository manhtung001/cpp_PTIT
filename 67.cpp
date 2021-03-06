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
	for (int index = 2; index < n; index++)
	{
		if (k % index == 0)
		{
			c++;
			k /= index;
			if (k % index == 0)
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