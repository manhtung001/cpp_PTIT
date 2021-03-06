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
		int l, r;
		cin >> l >> r;
		if (r - l < 2)
		{
			cout << "Yes" << endl;
			continue;
		}
		int k = l;
		while (k + 1 <= r && arr[k + 1] >= arr[k])
			k++;
		if (k == r)
		{
			cout << "Yes" << endl;
			continue;
		}
		while (k + 1 <= r && arr[k + 1] <= arr[k])
			k++;
		if (k == r)
		{
			cout << "Yes" << endl;
			continue;
		}
		cout << "No" << endl;
	}
}