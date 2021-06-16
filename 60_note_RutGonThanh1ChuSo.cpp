#include <bits/stdc++.h>
using namespace std;

long rutGon(long n)
{
	while (n >= 10)
	{
		long sum = 0;
		while (n > 0)
		{
			sum += n % 10;
			n /= 10;
		}
		n = sum;
	}
	return n;
}
main()
{
	int t;
	cin >> t;
	while (t--)
	{
		long n;
		cin >> n;
		cout << rutGon(n) << endl;
	}
}