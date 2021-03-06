#include <bits/stdc++.h>

using namespace std;

void setVl(int arr[], int z)
{
	if (z == 4)
	{
		arr[2] += 2;
		arr[3] += 1;
	}
	else if (z == 6)
	{
		arr[3] += 1;
		arr[5] += 1;
	}
	else if (z == 8)
	{
		arr[2] += 3;
		arr[7] += 1;
	}
	else if (z == 9)
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