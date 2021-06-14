#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		long long n;
		cin >> n;
		long long arr[n];
		memset(arr, -1, sizeof(arr));
		for (int i = 0; i < n; i++)
		{
			long long t;
			cin >> t;
			if (t >= 0 && t < n)
			{
				arr[t] = t;
			}
		}
		for (int i = 0; i < n; i++)
		{
			cout << arr[i] << " ";
		}
		cout << endl;
	}
}
