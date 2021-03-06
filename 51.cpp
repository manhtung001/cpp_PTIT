#include <bits/stdc++.h>
using namespace std;

main() {
	int t;
	cin >> t;
	while(t--) {
		string s;
		cin >> s;
		int SumChan = 0, SumLe = 0;
		for(int i = 0; i < s.size(); i++) {
			if(i % 2 == 0) {
				SumChan += s[i] - '0';
			}
			else SumLe += s[i] - '0';
		}
		int temp = abs(SumChan-SumLe);
		if(temp%11==0) cout << "1" << endl;
		else cout << "0" << endl;
	}
}
