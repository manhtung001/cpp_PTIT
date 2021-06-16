#include <bits/stdc++.h>
using namespace std;

main()
{
	int t;
	cin >> t;
	while (t--)
	{
		string s1, s2;
		cin >> s1 >> s2;
		for (int i = 0, j = 0; i < s1.size(), j < s2.size(); i++, j++)
		{
			if (s1[i] == '6')
				s1[i] = '5';
			if (s2[j] == '6')
				s2[j] = '5';
		}
		long sum1 = 0, sum2 = 0;
		for (int i = 0, j = 0; i < s1.size(), j < s2.size(); i++, j++)
		{
			sum1 = sum1 * 10 + s1[i] - '0';
			sum2 = sum2 * 10 + s2[j] - '0';
		}
		cout << sum1 + sum2 << ' ';

		for (int i = 0, j = 0; i < s1.size(), j < s2.size(); i++, j++)
		{
			if (s1[i] == '5')
				s1[i] = '6';
			if (s2[j] == '5')
				s2[j] = '6';
		}
		long sum3 = 0, sum4 = 0;
		for (int i = 0, j = 0; i < s1.size(), j < s2.size(); i++, j++)
		{
			sum3 = sum3 * 10 + s1[i] - '0';
			sum4 = sum4 * 10 + s2[j] - '0';
		}
		cout << sum3 + sum4 << ' ' << endl;
	}
}
