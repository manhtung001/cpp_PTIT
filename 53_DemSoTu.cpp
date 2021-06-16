#include <bits/stdc++.h>
using namespace std;

main()
{
	int t;
	cin >> t;
	while (t--)
	{
		cin.ignore();
		string s;
		getline(cin, s);
		int count = 0;
		for (int i = 0; i < s.size(); i++)
		{
			if (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
				count++;
		}
		cout << count + 1 << endl;
	}
}
