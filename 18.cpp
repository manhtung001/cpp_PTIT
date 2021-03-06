#include <bits/stdc++.h>

using namespace std;

long long z(long long n, long long k){
	long long res = 0;
	for (int i = 1; i <= n; i++){
		res += (i % k);
	}
	return res;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		long long n, k;
		cin >> n >> k;
		cout << z(n, k)<< endl;
	}
}
