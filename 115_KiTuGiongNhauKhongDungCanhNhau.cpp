#include <bits/stdc++.h>
using namespace std;

main()
{
	int t;
	cin >> t;
	while (t--)
	{
		string s;
		cin >> s;
		int dem[500] = {0};
		int res = 0;
		for (int i = 0; i < s.size(); i++)
		{
			dem[s[i]]++;
			if (dem[s[i]] > res)
				res = dem[s[i]];
		}
		if (s.size() % 2 == 0 && res <= s.size() / 2)
			cout << "1" << endl;
		else if (s.size() % 2 == 1 && res <= (s.size() / 2 + 1))
			cout << "1" << endl;
		else
			cout << "0" << endl;
	}
}
