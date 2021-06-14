#include <bits/stdc++.h>

using namespace std;

bool c(int n)
{
	if (n < 2)
	{
		return false;
	}
	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
		{
			return false;
		}
	}
	return true;
}

int main()
{
	int a, b;
	cin >> a >> b;
	for (int i = min(a, b); i <= max(a, b); i++)
	{
		if (c(i))
		{
			cout << i << " ";
		}
	}
}
