#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

long long gcd(long long a, long long b)
{
	if (b == 0)
	{
		return a;
	}
	return gcd(b, a % b);
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		long long n;
		cin >> n;
		if (n < 1)
		{
			cout << n << endl;
		}
		else
		{
			long long output = 1;
			for (int i = 2; i <= n; i++)
			{
				output = output * i / gcd(output, i);
			}
			cout << output << endl;
		}
	}
}