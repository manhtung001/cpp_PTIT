#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

main()
{
	vector<string> vt;
	int n;
	cin >> n;
	cin.ignore();
	while(n--) {
		string s;
		getline(cin, s);
		vt.push_back(s);
	}
	vector<string> uni;
	for(int i = 0; i < vt.size(); i++) {
		int flag = 0;
		for(int j = 0; j < uni.size(); j++) {
		if(vt[i] == uni[j]) flag++;
		}
		if(flag == 0) uni.push_back(vt[i]);
	}
	cout<<uni.size()<<endl;
	
	return 0;
}


