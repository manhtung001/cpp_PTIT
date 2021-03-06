#include <bits/stdc++.h>

using namespace std;

bool a = true;

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
		int min = 0, result = -1;
		for (int i = 0; i < n; i++)
		{
			if (arr[i] < min || min == 0)
			{
				min = arr[i];
			}
			for (int j = i + 1; j < n; j++)
			{
				if (arr[j] > min && arr[j] - min > result)
				{
					result = arr[j] - min;
				}
			}
		}
		cout << result << endl;
	}
}