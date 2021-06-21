#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

// code dung

int main()
{
	string de101 = "A B B A D C C A B D C C A B D";
	string de102 = "A C C A B C	D D B B C D D B B";
	int t;
	cin >> t;
	while (t--)
	{
		int de;
		cin >> de;
		int corr = 0;
		for (int i = 0; i < 15; i++)
		{
			char ans;
			cin >> ans;
			if (de == 101 && ans == de101[i * 2])
			{
				corr++;
			}
			if (de == 102 && ans == de102[i * 2])
			{
				corr++;
			}
		}
		cout << fixed << setprecision(2) << (double)corr * 10 / 15 << endl;
	}
}