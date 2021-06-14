#include <bits/stdc++.h>

using namespace std;

void cinArr(int arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
}

void z(int a1[], int a2[], int n)
{
	int output = -1;
	for (int i = 0; i < n; i++)
	{
		int s1 = 0, s2 = 0;
		for (int j = i; j < n; j++)
		{
			s1 += a1[j];
			s2 += a2[j];
			if (s1 == s2 && j - i + 1 > output)
			{
				output = j - i + 1;
			}
		}
	}
	cout << output << endl;
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		int a1[n], a2[n];
		cinArr(a1, n);
		cinArr(a2, n);
		z(a1, a2, n);
	}
}
