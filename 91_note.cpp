#include <bits/stdc++.h>

using namespace std;

long long arr[100007];

long long data[100007];

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		long long n;
		cin >> n;
		for (long long i = 0; i < n; i++)
		{
			cin >> arr[i];
		}
		memset(data, 0, sizeof(data));
		data[0] = arr[0];
		data[1] = arr[1];
		data[2] = arr[0] + arr[2];
		for (long long i = 3; i < n; i++)
		{
			data[i] = arr[i] + max(data[i - 2], data[i - 3]);
		}
		cout << *max_element(data, data + n);
		cout << endl;
	}
}
