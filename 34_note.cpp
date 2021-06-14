#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n, k;
		cin >> n >> k;
		int arr[1007];
		memset(arr, 0, sizeof(arr));
		int res = 0;

		for (int i = 0; i < n; i++)
		{
			int z;
			cin >> z;
			if (k - z >= 0 && arr[k - z])
			{
				res += arr[k - z];
			}
			arr[z]++;
		}
		cout << res;
		cout << endl;
	}
}
