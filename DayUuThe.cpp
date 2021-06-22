#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while (t--){
		string s = "";
		while (s.length() == 0){
			getline(cin, s);
		}
		int total = 1;
		int total_chan = 0;
		for (int i = 0; i < s.size(); i++){
			if (s[i] == ' '){
				total += 1; // dem so
			}
			if ( (s[i] != ' ' && s[i + 1] == ' ') || (s[i] != ' ' && i + 1 == s.size() - 1)){
				int c = (int) s[i] - 48;
				if (c % 2 == 0){
					total_chan += 1;
				}
			}
		}
		int total_le = total - total_chan;
		if ( (total % 2 == 0 && total_chan > total_le) || (total % 2 == 1 && total_le > total_chan)){
			cout << "YES" << endl;
		} else {
			cout << "NO" << endl;
		}
	}
}
