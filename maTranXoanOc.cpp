#include <bits/stdc++.h>
using namespace std;

void In(int arr, int soDong, int soCot)
{
}

main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int m, n;
		cin >> n >> m;
		int arr[n + 5][m + 5];
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				cin >> arr[i][j];
			}
		}

		int dong = n - 1, cot = m - 1;
		int i = 0, j = 0;
		int dem = 0;

		while (dem != n * m)
		{
			for (int k = j; k <= cot; k++)
				cout << arr[i][k] << " ";
			;
			i++;
			for (int k = i; k <= dong; k++)
				cout << arr[k][cot] << " ";
			;
			cot--;
			for (int k = cot; k >= j; k--)
				cout << arr[dong][k] << " ";
			;
			dong--;
			for (int k = dong; k >= i; k--)
				cout << arr[k][j] << " ";
			;
			j++;
			dem++;
		}
		cout << endl;
	}
}

#include <iostream>

using namespace std;

int main()
{
	int T;
	cin >> T;
	while (T--)
	{
		int m, n;
		cin >> m >> n;
		int a[m + 1][n + 1];
		for (int i = 0; i < m; i++)
		{
			for (int j = 0; j < n; j++)
			{
				cin >> a[i][j];
			}
		}
		int x = 0, y = n - 1, z = 0, t = m - 1;
		int dem = 0;
		while (x <= y || z <= t)
		{
			for (int i = x; i <= y; i++)
			{
				cout << a[z][i] << " ";
				dem++;
			}

			if (dem >= m * n)
				break;
			for (int i = z + 1; i <= t; i++)
			{
				cout << a[i][y] << " ";
				dem++;
			}

			if (dem >= m * n)
				break;
			for (int i = y - 1; i >= x; i--)
			{
				cout << a[t][i] << " ";
				dem++;
			}

			if (dem >= m * n)
				break;
			for (int i = t - 1; i >= z + 1; i--)
			{
				cout << a[i][x] << " ";
				dem++;
			}

			if (dem >= m * n)
				break;
			x++;
			z++;
			y--;
			t--;
		}
		cout << endl;
	}
}
