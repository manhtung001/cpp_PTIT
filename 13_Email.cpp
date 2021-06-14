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
	string res = words[dem];
	for (ll i = 0; i < dem; i++)
	{
		res += words[i][0];
	}
	res += "@ptit.edu.vn";
	cout << res;
}