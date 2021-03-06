#include <bits/stdc++.h>

using namespace std;

char soSangChu(int num)
{
	return (char)(num + (int)'0');
}

string soSangChuoi(long long a)
{
	string tmpt = "";
	while (a != 0)
	{
		tmpt.insert(0, 1, soSangChu(a % 10));
		a /= 10;
	}
	return tmpt;
}

bool checkLeng(int i, int j)
{ // i la sau, j la trc
	string sj = soSangChuoi(j) + soSangChuoi(i);
	string si = soSangChuoi(i) + soSangChuoi(j);
	return (sj > si);
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		vector<long> vt;
		int n;
		cin >> n;
		for (int i = 0; i < n; i++)
		{
			int a;
			cin >> a;
			vt.push_back(a);
		}
		sort(vt.begin(), vt.end(), checkLeng);
		for (int j = vt.size() - 1; j >= 0; j--)
		{
			cout << vt[j];
		}
		cout << endl;
	}
}
