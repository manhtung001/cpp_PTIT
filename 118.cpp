#include <bits/stdc++.h>
using namespace std;

main() {
	int t;
	cin >> t;
	while(t--) {
		string s;
		cin >> s;
		long sum = 0;
		long res = 0;
		for(long i = 0; i <= s.size(); i++) {
			if(s[i] >= '0' && s[i] <= '9') {
				sum = sum * 10 + s[i] - '0';
			}
			else {
				if(sum > res) res = sum;
				sum = 0;
			}
		}
		cout << res << endl;
	}
}
