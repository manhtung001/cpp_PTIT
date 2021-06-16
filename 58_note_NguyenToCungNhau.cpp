#include <bits/stdc++.h>

using namespace std;

long ucln(long a, long b)
{
	if (b == 0)
	{
		return a;
	}
	return ucln(b, a % b);
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		long k;
		cin >> k;
		long res = 0;
		for (long i = 1; i <= k; i++)
		{
			if (ucln(i, k) == 1)
			{
				res++;
			}
		}
		int output = 1;
		for (long i = 2; i <= sqrt(res); i++)
		{
			if (res % i == 0)
			{
				output = 0;
				break;
			}
		}
		cout << (res > 1 ? output : 0) << endl;
	}
}