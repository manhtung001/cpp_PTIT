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
		vector<int> v;
		for (int i = 0; i < n; i++)
		{
			int k;
			cin >> k;
			v.push_back(k);
		}
		sort(v.begin(), v.end());
		int index = 0;
		int z = n - 1;
		while (z > index)
		{
			cout << v[z] << " " << v[index] << " ";
			z--;
			index++;
		}
		if (z == index)
		{
			cout << v[z];
		}
		cout << endl;
	}
}