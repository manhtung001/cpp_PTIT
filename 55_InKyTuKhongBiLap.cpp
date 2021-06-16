#include <bits/stdc++.h>
using namespace std;

main()
{
	int t;
	cin >> t;
	cin.ignore();
	while (t--)
	{
		string s;
		cin >> s;
		int count[10000];
		memset(count, 0, sizeof(count));
		for (int i = 0; i < s.size(); i++)
			count[s[i]]++;
		for (int i = 0; i < s.size(); i++)
		{
			if (count[s[i]] == 1)
				cout << s[i];
		}
		cout << endl;
	}
}