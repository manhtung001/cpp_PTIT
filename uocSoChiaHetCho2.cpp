#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while (t--){
		long long n;
		cin >> n;
		long long res = 0;
		while (n % 2 == 0){
			res += 1;
			n /= 2;
		}
		long long u = 0;
		for (long long i = 1; i <= sqrt(n); i++){
			if (n % i == 0){
				u += 2;
			}
		}
		long long s = sqrt(n);
		if (s * s == n){
			u -= 1;
		}
		cout << res * u << endl;
	}
}
