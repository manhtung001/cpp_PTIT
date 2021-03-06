#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		long n, k;
		cin >> n >> k;
		long long arr[n];
		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
		}
		long long l, r, max;
		for (int i = 0; i < n - k + 1; i++)
		{
			long long a = 0;
			for (int j = i; j < i + k; j++)
			{
				a += arr[j];
			}
			if (i == 0 || max <= a)
			{
				max = a;
				l = i;
				r = i + k - 1;
			}
		}
		for (int i = l; i <= r; i++)
		{
			cout << arr[i] << " ";
		}
		cout << endl;
	}
}