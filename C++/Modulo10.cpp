#include <bits/stdc++.h>
using namespace std;
int m = 1e9 + 7;
long long a[10005];
long long luythua(int k, int n)
{
	if (n == 0)
		return 1;
	long long x = luythua(k, n / 2);
	if (n % 2 == 0)
		return x * x % m;
	return k * (x * x % m) % m;
}
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		long long n, x;
		cin >> n >> x;
		for (int i = n - 1; i >= 0; i--)
			cin >> a[i];
		long long s = 0;
		for (int i = n - 1; i >= 0; i--)
		{
			s = (s + a[i] * luythua(x, i)) % m;
		}
		cout << s << endl;
	}
}
