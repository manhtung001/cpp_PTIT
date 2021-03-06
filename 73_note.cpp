#include <bits/stdc++.h>
using namespace std;
string s;
long long x, mod;

long long pow(long long a, long long b)
{
	if (b == 1)
		return a;
	long long temp = pow(a, b / 2);
	if (b % 2 == 0)
		return temp * temp % mod;
	else
		return ((temp * temp) % mod * a) % mod;
}

long long convert()
{
	long long res = 0;
	for (long long i = 0; i < s.size(); i++)
	{
		res = (res * 10 + s[i] - '0') % mod;
	}

	return res;
}

main()
{
	int t;
	cin >> t;
	while (t--)
	{
		cin >> s >> x >> mod;
		cout << pow(convert(), x) << endl;
	}
}
