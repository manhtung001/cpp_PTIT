#include <bits/stdc++.h>
using namespace std;

main()
{
	int t;
	cin >> t;
	while (t--)
	{
		string s1 = "";
		cin >> s1;
		int sum = 0;
		string s2 = "";
		for (int i = 0; i < s1.size(); i++)
		{
			if (s1[i] >= '0' && s1[i] <= '9')
			{
				sum += s1[i] - '0';
			}
			else
			{
				s2 += s1[i];
			}
		}
		sort(s2.begin(), s2.end());
		cout << s2 << sum << endl;
	}
}
