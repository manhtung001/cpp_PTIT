
#include <bits/stdc++.h>
using namespace std;

int main()
{

	string name, s1;
	getline(cin, name);
	for (int i = 0; i < name.size(); i++)
	{
		name[i] = tolower(name[i]);
	}

	string words[100];
	string word;
	stringstream s(name);
	int dem = 0;
	while (s >> word)
	{
		words[dem] = word;
		dem++;
	}

	for (int i = 0; i < dem - 1; i++)
	{
		words[i][0] = toupper(words[i][0]);
		s1 += words[i];
		if (i < dem - 2)
		{
			s1 += " ";
		}
	}
	s1 += ",";
	for (int i = 0; i < words[dem - 1].size(); i++)
	{
		words[dem - 1][i] = toupper(words[dem - 1][i]);
	}
	cout << s1 << " " << words[dem - 1] << endl;
}
