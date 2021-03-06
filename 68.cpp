#include <bits/stdc++.h>

using namespace std;

long long find(long long n){
	if (n == 1){
		return 1;
	}
	for (long long i = 2; i <= sqrt(n); i++){
		if (n % i == 0){
			return i;
		}
	}
	return n;
}

int main (){
	int t;
	cin >> t;
	while (t--){
		long long n;
		cin >> n;
		for (long long i = 1; i <= n; i++){
			cout << find(i) << " ";
		}
		cout << endl;
	}
}