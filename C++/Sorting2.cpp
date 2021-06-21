#include <bits/stdc++.h>
using namespace std;
struct data
{
	int a, b, cs;
};
int cmp(data x, data y)
{
	if (x.b > y.b)
		return false;
	if (x.b == y.b && x.cs > y.cs)
		return false;
	return true;
}
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n, k;
		cin >> n >> k;
		vector<data> v(n);
		for (int i = 0; i < n; i++)
		{
			cin >> v[i].a;
			v[i].b = abs(k - v[i].a);
			v[i].cs = i;
		}
		sort(v.begin(), v.end(), cmp);
		for (int i = 0; i < n; i++)
		{
			cout << v[i].a << " ";
		}
		cout << endl;
	}
}
