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
		int check[n];
		memset(check, 0, sizeof(check));
		int min = arr[0];
		check[0] = 1;
		for (int i = 1; i < n; i++)
		{
			int temp = 0;
			for (int j = i - 1; j >= 0; j--)
			{
				if (arr[j] < arr[i] && check[j] > temp)
				{
					temp = check[j];
				}
			}
			check[i] = temp + 1;
		}
		cout << *max_element(check, check + n) << endl;
	}
}