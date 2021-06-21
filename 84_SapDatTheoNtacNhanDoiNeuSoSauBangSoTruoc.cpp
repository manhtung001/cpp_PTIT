#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		int arr[n];
		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
		}
		int z = 0;
		for (int i = 0; i < n; i++)
		{
			if (arr[i + 1] != 0 && arr[i] == arr[i + 1])
			{
				arr[i] *= 2;
				arr[i + 1] = 0;
			}
			if (arr[i] == 0)
			{
				z++;
			}
			if (arr[i] != 0)
			{
				cout << arr[i] << " ";
			}
		}
		while (z--)
		{
			cout << 0 << " ";
		}
		cout << endl;
	}
}