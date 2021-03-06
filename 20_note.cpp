#include <bits/stdc++.h>

using namespace std;

long long arr[1007];

long long z(int n, long long k)
{
	if (n == 0)
	{
		return 0;
	}
	if (n == 1)
	{
		return 1;
	}
	if (arr[n] > 0)
	{
		return arr[n];
	}
	arr[n] = (z(n - 1, k) % k + z(n - 2, k) % k) % k;
	return arr[n];
}

int main()
{
	arr[1] = 1;
	long long k = 1000000007;
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		cout << z(n, k) << endl;
	}
}
