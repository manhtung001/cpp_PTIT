#include <bits/stdc++.h>

using namespace std;

int main (){
	int t;
	cin >> t;
	while (t--){
		long long n;
		cin >> n;
		cout << (n % 100 == 86 ? 1 : 0) << endl;
	}
}