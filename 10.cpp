#include <bits/stdc++.h>

using namespace std;

int charToNum(char a)
{
	return (int)a - (int)'0';
}

char numToChar(int a)
{
	return (char)(a + (int)'0');
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{

		string a, b;
		cin >> a;
		cin >> b;

		string res = "";

		if (a == b)
		{
			res.insert(0, a.length() - 1, '0');
			cout << res << endl;
			continue;
		}

		if (a.length() > b.length())
		{
			b.insert(0, a.length() - b.length(), '0');
		}
		else if (a.length() < b.length())
		{
			a.insert(0, b.length() - a.length(), '0');
		}

		string aa = a, bb = b;

		if (a < b)
		{
			aa = b;
			bb = a;
		}

		int temp = 0;
		for (int i = aa.length() - 1; i >= 0; i--)
		{
			int z = charToNum(aa[i]) - charToNum(bb[i]) + temp;
			if (z < 0)
			{
				temp = -1;
				z += 10;
			}
			else
			{
				temp = 0;
			}
			res.insert(0, 1, numToChar(z % 10));
		}

		cout << res;
		cout << endl;
	}
}