#include <bits/stdc++.h>
using namespace std;
void check()
{
	long long n;
	cin >> n;

	long long f0 = 0, f1 = 1, fn = 1;

	while (f0 + f1 <= n)
	{

		fn = f0 + f1;

		f0 = f1;

		f1 = fn;
	}
	if (fn == n || n == 0)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
}
int main()
{
	int t;
	cin >> t;
	while (t--)
		check();
	return 0;
}
