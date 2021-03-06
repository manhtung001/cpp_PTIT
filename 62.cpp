#include <bits/stdc++.h>

using namespace std;


long long ucln(long long a, long long b){
	if (b == 0){
		return a;
	}
	return ucln(b, a % b);
}

int main(){
	int t;
	cin >> t;
	while (t--){
		long long a, x, y;
		cin >> a >> x >> y;
		long long k = ucln(x, y);
		while (k--){
			cout << a;
		}
		cout << endl;
	}
}