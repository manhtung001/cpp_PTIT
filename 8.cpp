#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n, a;
		cin >> n >> a;
		if (a > n)
		{
			cout << -1 << endl;
			continue;
		}
		a -= 1;
		int arr[n + 1], index = 0;
		memset(arr, 0, sizeof(arr));
		for (int i = 2; i <= n; i++)
		{
			while (n % i == 0)
			{
				arr[index] = i;
				index++;
				n /= i;
			}
		}
		cout << (arr[a] > 0 ? arr[a] : -1) << endl;
	}
}
