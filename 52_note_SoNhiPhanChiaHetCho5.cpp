// note

#include <bits/stdc++.h>
using namespace std;

long long luythua(long a, long n)
{
	if (n == 0)
		return 1;
	long long temp = luythua(a, n / 2);
	temp *= temp;
	temp %= 10;
	if (n % 2 == 0)
		return temp;
	return (temp * a) % 10;
}

main()
{
	long t;
	cin >> t;
	while (t--)
	{
		string s;
		cin >> s;
		long dem = 0, sum = 0;
		for (long i = s.size() - 1; i >= 0; i--)
		{
			long temp = (s[i] - '0') * luythua(2, dem);
			sum += temp % 10;
			while (sum >= 10)
				sum %= 10;
			dem++;
		}
		if (sum == 0 || sum == 5)
			cout << "Yes" << endl;
		else
			cout << "No" << endl;
	}
}
