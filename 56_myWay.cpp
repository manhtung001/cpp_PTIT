#include <bits/stdc++.h>
using namespace std;

main() {
	long t;
	cin >> t;
	cin.ignore();
	while(t--) {

		string sentence;
		getline(cin, sentence);
		
		// cin.ignore(); khong dc cho dong nay o day, dm de bai bi sai
		
		string words[1005];
		string word;
		stringstream s(sentence);
		long dem = 0;
		while ( s >> word)
		{
			words[dem] = word;
			dem++;
		}
		for (long i = dem; i >= 0; i--) {
			cout<<words[i]<< " ";
		}

		cout<<endl;
	}
}










#include <bits/stdc++.h>
using namespace std;

main() {
	long t;
	cin >> t;
	cin.ignore();
	while(t--) {
		long l;
		string s;
		getline(cin, s);
		long temp = s.size() - 1;
		string res="";
		
		long r = s.size();

		while(temp >= 0) {
			if(s[temp] == ' ') {
				l = temp + 1;
				while(l != r) {
					res += s[l++];
				}
				res += " ";
				r = temp;
			}
			temp--;
		}

		l = 0;

		while(l != r) {
			res += s[l++];
		}
        
		cout << res << endl;
	}
}