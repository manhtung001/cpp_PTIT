#include <bits/stdc++.h>

using namespace std;


long long ucln(long long a, long long b){
	if (b == 0){
		return a;
	}
	return ucln(b, a % b);
}

long long bcnn(long long a, long long b, long long c){
	long long z = a * b / ucln(a, b);
	return z * c / ucln(z, c);
}

long long minN(long long n){
	n -= 1;
	long long res = 1;
	while (n--){
		res *= 10;
	}
	return res;
}

long long maxN(long long n){
	long long res = 1;
	while (n--){
		res *= 10;
	}
	return res - 1;
}

int main(){
	int t;
	cin >> t;
	while (t--){
		long long x, y, z, n;
		cin >> x >> y >> z >> n;
		long long a = bcnn(x, y, z);
		long long aa = minN(n);
		long long b = aa / a + (aa % a == 0 ? 0 : 1);
		if (b * a > maxN(n)){
			cout << -1;
		} else {
			cout << b * a;
		}
		cout << endl;
	}
}
