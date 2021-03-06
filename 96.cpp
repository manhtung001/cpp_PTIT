#include <bits/stdc++.h>
using namespace std;

main()
{
	int t;
	cin >> t;
	long check[100005];
	for (int i = 2; i < 100005; i++)
		check[i] = true;

	for (int i = 2; i < 10005; i++)
	{
		if (check[i] == true)
		{
			for (int j = 2 * i; j < 100005; j += i)
			{
				check[j] = false;
			}
		}
	}
	while (t--)
	{
		long a, b;
		cin >> a >> b;
		if (a > b)
		{
			long temp = a;
			a = b;
			b = temp;
		}

		long dem = 0;
		for (long i = a; i <= b; i++)
		{
			if (check[i] == true)
				dem++;
		}
		cout << dem << endl;
	}
}
