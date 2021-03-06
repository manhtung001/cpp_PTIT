#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		long n;
		cin >> n;
		long long arr[n];
		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
		}
		long long check[n];
		check[0] = arr[0];
		for (int i = 1; i < n; i++)
		{
			check[i] = arr[i] + (check[i - 1] > 0 ? check[i - 1] : 0);
		}
		long long max = *max_element(check, check + n);
		cout << max << endl;
	}
}