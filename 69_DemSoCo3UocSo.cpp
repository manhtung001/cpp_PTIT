#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	int t;
	cin >> t;
	long check[100005];
	for (int i = 2; i < 100005; i++)
		check[i] = true;

	for (int i = 2; i < 10005; i++)
	{
		if (check[i] == true)
		{
			for (int j = 2 * i; j < 100005; j += i)
			{
				check[j] = false;
			}
		}
	}
	while (t--)
	{
		long n, dem = 0;
		cin >> n;
		for (long i = 2; i * i <= n; i++)
		{
			if (check[i] == true)
			{
				dem++;
			}
		}
		cout << dem << endl;
	}
}
