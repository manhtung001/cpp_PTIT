#include <bits/stdc++.h>
using namespace std;
bool check(long long n)
{
	long long f0 = 0, f1 = 1, fn = 1;
	while (f0 + f1 <= n)
	{
		fn = f0 + f1;
		f0 = f1;
		f1 = fn;
	}
	if (fn == n || n == 0)
		return true;
	else
		return false;
}
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		long n;
		cin >> n;
		long a[n + 5];
		for (long i = 1; i <= n; i++)
			cin >> a[i];
		for (long i = 1; i <= n; i++)
		{
			if (check(a[i]) == true)
				cout << a[i] << " ";
		}
		cout << endl;
	}
	return 0;
}