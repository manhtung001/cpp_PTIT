#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
	string a;
	getline(cin, a);
	for (ll i = 0; i < a.size(); i++)
	{
		a[i] = tolower(a[i]);
	}
	string words[100], word;
	stringstream s(a);
	ll dem = 0;
	while (s >> word)
	{
		words[dem++] = word;
	}
	dem--;
	for (ll i = 0; i < dem; i++)
	{
		words[i][0] = toupper(words[i][0]);
		cout << words[i];
		if (i != dem - 1)
			cout << " ";
	}
	cout << ", ";
	for (ll i = 0; i < words[dem].size(); i++)
	{
		words[dem][i] = toupper(words[dem][i]);
		cout << words[dem][i];
	}
}