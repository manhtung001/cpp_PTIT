#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while (t--){
		long n;
		cin >> n;
		string a ="", b = "", c = "";
		for (int i = 0; i < n; i++){
			long k;
			cin >> k;
			if (k == 0){
				a += "0 ";
			}
			else if (k == 1){
				b += "1 ";
			}
			else{
				c += "2 ";
			}
		}
		cout << a << b << c;
		cout << endl;
	}
}
