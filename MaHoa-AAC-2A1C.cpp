
#include <bits/stdc++.h>
using namespace std;
//V� d?: AACDDPQ du?c m� h�a th�nh 2A1C2D1P1Q

//           11111147g du?c m� h�a th�nh 6114171g
main()
{
	int t;
	cin >> t;
	while(t--) {
		string s;
		cin >> s;
		string res = "";
		for(int i = 0; i < s.size(); i++) {
			int dem = 1;
			while(s[i] == s[i + 1]) {
				dem++;
				i++;
			}
			cout<<dem<<s[i];
		}
		cout<<endl;
	}
}


