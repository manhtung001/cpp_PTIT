#include <bits/stdc++.h>
using namespace std;

string s;
int k;
void check() {
	int a[26];
	memset(a, 0, sizeof(a));
	for(int i = 0; i < s.length(); i++) {
		if('a' <= s[i] && s[i] <= 'z') a[s[i]-'a']++;
	}
	int temp = 0;
	for(int i = 0; i < 26; i++) {
		if(a[i] > 0) temp++;
	}
	if(temp + k >= 26) cout << "1" << endl;
	else cout << "0" << endl;
}

main()
{
	int t;
	cin >> t;
	while(t--) {
	cin >> s >> k;
	check();
	}
}
