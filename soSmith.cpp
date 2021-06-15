#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int tong_cs(ll n) {
	int sum = 0;
	while(n != 0) {
		int tmp = n % 10;
		sum += tmp;
		n /= 10;
	}
	return sum;
}

int tong_ts(ll n) {
	int sum = 0;
	for(int i = 2; i <= sqrt(n); i++) {
		while(n % i == 0) {
			sum += tong_cs(i);
			n /= i;
		}
	}
	if(n > 1) {		// trong TH neu con lai la so nto
		sum += tong_cs(n);
	}
	return sum;
}

int main() {
	ll n;
	cin >> n;
	if(tong_cs(n) == tong_ts(n)) {
		cout<<"YES";
	} else {
		cout<<"NO";
	}
}
