#include <iostream>
using namespace std;

void ThKe(int a[], int n, int k)
{
	for (int i = 1; i <= k; i++)
		a[i] = i;
	while (1)
	{
		for (int i = 1; i <= k; i++)
			cout << a[i];
		cout << " ";
		int i = k;
		while (i > 0 && a[i] >= n - k + i)
			i--;
		if (i == 0)
			return; //Da o to hop cuoi cung;
		a[i] = a[i] + 1;
		for (int j = i + 1; j <= k; j++)
			a[j] = a[i] + 1;
	}
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n, k;
		cin >> n >> k;
		int a[n + 5];
		ThKe(a, n, k);
		cout << endl;
	}
}
