#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		long long n;
		cin >> n;
		long long t, zero = 0;
		while (n--)
		{
			cin >> t;
			if (t != 0)
			{
				cout << t << " ";
			}
			else
			{
				zero += 1;
			}
		}
		while (zero--)
		{
			cout << 0 << " ";
		}
		cout << endl;
	}
}
