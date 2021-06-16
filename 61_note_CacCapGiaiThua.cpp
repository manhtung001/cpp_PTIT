#include <bits/stdc++.h>

using namespace std;

void setVl(int arr[], int z)
{
	if (z == 4) // 4 = 4x3x2 = 2x2x3x2
	{
		arr[2] += 2;
		arr[3] += 1;
	}
	else if (z == 6) // 6 = 6x5x4x3x2 = 3x2x5x4x3x2
	{
		arr[3] += 1;
		arr[5] += 1;
	}
	else if (z == 8) // 8 = 8x7x6x5x4x3x2 = 2x2x2x7x6x5x4x3x2
	{
		arr[2] += 3;
		arr[7] += 1;
	}
	else if (z == 9) // 9 = 9x8x7x6x5x4x3x2 = 3x3x2x2x2x7x6x5x4x3x2
	{
		arr[3] += 2;
		arr[2] += 1;
		arr[7] += 1;
	}
	else
	{
		arr[z] += 1;
	}
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		long long a;
		cin >> n >> a;
		int arr[10];
		memset(arr, 0, sizeof(arr));
		long k = a;
		while (k != 0)
		{
			int z = k % 10;
			setVl(arr, z);
			k /= 10;
		}
		for (int i = 9; i >= 2; i--)
		{
			while (arr[i] != 0)
			{
				cout << i;
				arr[i]--;
			}
		}
		cout << endl;
	}
}