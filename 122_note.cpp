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
		for (int i = 0; i < s1.size(); i++)
		{
			if (s1[i] >= '0' && s1[i] <= '9')
			{
				sum += s1[i] - '0';
				s1.erase(s1.begin() + i);
				i--;
			}
		}
		sort(s1.begin(), s1.end());
		cout << s1 << sum << endl;
	}
}
