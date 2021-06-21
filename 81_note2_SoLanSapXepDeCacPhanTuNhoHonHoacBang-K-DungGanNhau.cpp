#include <bits/stdc++.h>
using namespace std;
int n, k, a[1000005];
void slove()
{
	int count = 0, bad = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] <= k)
			count++;
	}
	for (int i = 0; i < count; i++)
	{
		if (a[i] > k)
			bad++;
	}
	int ans = bad;
	for (int i = 0, j = count; j < n; i++, j++)
	{
		if (a[i] > k)
			bad--;
		if (a[j] > k)
			bad++;
		ans = min(bad, ans);
	}
	cout << ans << endl;
}
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		cin >> n >> k;
		for (int i = 0; i < n; i++)
			cin >> a[i];
		slove();
	}
}
