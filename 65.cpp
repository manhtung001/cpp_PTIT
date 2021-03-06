#include <iostream>
#include <math.h>

using namespace std;

bool check[10007];

void lauc()
{
	for (long i = 2; i <= 10007; i++)
		check[i] = true;
	for (long i = 2; i <= 10007; i++)
	{
		if (check[i] == true)
		{
			for (long j = i * i; j <= 10007; j += i)
			{
				check[j] = false;
			}
		}
	}
}

int main()
{
	lauc();
	int t;
	cin >> t;
	while (t--)
	{
		long m, n;
		cin >> m >> n;
		for (long i = m; i <= n; i++)
		{
			if (check[i] == true)
			{
				cout << i << " ";
			}
		}
		cout << endl;
	}
}
