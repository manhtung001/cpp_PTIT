#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n1, n2, z;
		cin >> n1 >> n2;
		int arr1[n1], arr2[n2];
		memset(arr1, 0, sizeof(arr1));
		memset(arr2, 0, sizeof(arr2));
		for (int i = 0; i < n1; i++)
		{
			cin >> z;
			if (i == 0)
			{
				arr1[0] = z;
			}
			else
			{
				arr1[i] = z + arr1[i - 1];
			}
		}
		for (int i = 0; i < n2; i++)
		{
			cin >> z;
			if (i == 0)
			{
				arr2[0] = z;
			}
			else
			{
				arr2[i] = z + arr2[i - 1];
			}
		}
		long res = -1;
		int i = 0;
		while (i < max(n1, n2))
		{
			long z1 = 0, z2 = 0;
			if (i < n1 && i < n2)
			{
				z1 = arr1[i] + arr2[n2 - 1] - arr2[i];
				z2 = arr2[i] + arr1[n1 - 1] - arr1[i];
			}
			if (z1 > res)
			{
				res = z1;
			}
			if (z2 > res)
			{
				res = z2;
			}
			i++;
		}
		cout << res;
		cout << endl;
	}
}