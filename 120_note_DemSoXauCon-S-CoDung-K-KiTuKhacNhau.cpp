#include <bits/stdc++.h>
using namespace std;

main()
{
	int t;
	cin >> t;
	while (t--)
	{
		string s;
		int k;
		cin >> s >> k;
		int count, dem = 0;
		int check[1000];
		for (int i = 0; i < s.size(); i++)
		{
			memset(check, 0, sizeof(check));
			count = 0;
			for (int j = i; j < s.size(); j++)
			{
				if (check[s[j] - 'a'] == 0)
					count++;
				check[s[j] - 'a']++;

				if (count == k)
					dem++;
				// else if (count > k)  // cho vao de chay nhanh hon
				// 	break;
			}
		}
		cout << dem << endl;
	}
}