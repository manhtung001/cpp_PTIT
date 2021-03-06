#include <bits/stdc++.h>
using namespace std;

long rutGon(long n)
{

	long sum = 0;

	while (n > 0)
	{
		sum += n % 10;
		n /= 10;
	}

	// doan an tien

	while (sum >= 10)
	{
		sum = rutGon(sum);
	}

	return sum;
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
