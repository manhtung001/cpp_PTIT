#include <bits/stdc++.h>
using namespace std;

int main()
{

	string name, s1;
	getline(cin, name);
	for(int i=0; i< name.size(); i++)
  	{
    	name[i] = tolower(name[i]);
  	}

	string words[100];
  	string word;
  	stringstream s(name);
  	int dem = 0;
  	while ( s >> word)
  	{
  		words[dem] = word;
  		dem++;
	}
	
	for (int i = 0; i < dem-1; i++)
	{
		s1  += words[i][0];
	}
	cout << words[dem-1] << s1 << "@ptit.edu.vn" << endl;
}