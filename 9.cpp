#include <iostream>
#include <math.h>

using namespace std;

bool check[1007];

void lauc()
{
	for (long i = 2; i <= 1007; i++)
		check[i] = true;
	for (long i = 2; i <= 1007; i++)
	{
		if (check[i] == true)
		{
			for (long j = i * i; j <= 1007; j += i)
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
		long n;
		cin >> n;
		long max = (long)sqrt(n);
		for (long i = 2; i <= max; i++)
		{
			if (check[i] == true)
			{
				cout << i * i << " ";
			}
		}
		cout << endl;
	}
}
