#include <bits/stdc++.h>
using namespace std;

int check = 0;
string s;

void Remove()
{
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == '1' && s[i + 1] == '0' && s[i + 2] == '0')
		{
			check += 3;
			s.erase(i, 3);
			Remove();
		}
	}
}

main()
{
	int t;
	cin >> t;
	while (t--)
	{
		check = 0;
		cin >> s;
		Remove();
		cout << check << endl;
	}
}
