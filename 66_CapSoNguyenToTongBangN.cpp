#include <bits/stdc++.h>
using namespace std;
long check[1000005];
main()
{
	int t;
	cin >> t;
	for (long i = 2; i <= 1000005; i++)
		check[i] = true;
	for (long i = 2; i <= 1000005; i++)
	{
		if (check[i] == true)
		{
			for (long j = i * i; j <= 1000005; j += i)
			{
				check[j] = false;
			}
		}
	}
	while (t--)
	{
		long n;
		cin >> n;
		for (long i = 2; i <= n / 2; i++)
		{
			if (check[i] == true && check[n - i] == true)
			{
				cout << i << " " << n - i << endl;
				break;
			}
		}
	}
}
