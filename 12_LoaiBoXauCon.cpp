#include <bits/stdc++.h>
using namespace std;

int main()
{
	string a, b;
	getline(cin, a);
	getline(cin, b);

	string words[100];
	string word;
	stringstream s(a);

	int dem = 0;

	while (s >> word)
	{
		words[dem] = word;
		dem++;
	}

	for (int i = 0; i < dem; i++)
	{
		if (b != words[i])
			cout << words[i] << " ";
	}
}
