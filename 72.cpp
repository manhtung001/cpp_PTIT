#include <bits/stdc++.h>
using namespace std;

int main()
{
	int test;
	cin >> test;
	while (test--)
	{
		string s;
		cin >> s;
		long long M;
		cin >> M;
		long long resMod = 0;

		for (int i = 0; i < s.size(); i++)
			resMod = (resMod * 10 + s[i] - '0') % M;

		cout << resMod << endl;
	}
}
