#include <bits/stdc++.h>

using namespace std;

long find(long n)
{
	if (n == 1)
	{
		return 1;
	}
	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
		{
			return i;
		}
	}
	return n;
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		long n;
		cin >> n;
		for (int i = 1; i <= n; i++)
		{
			cout << find(i) << " ";
		}
		cout << endl;
	}
}