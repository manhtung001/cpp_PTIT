#include <bits/stdc++.h>

using namespace std;


int main (){
	int t;
	cin >> t;
	while (t--){
		long a, b, c, d;
		cin >> a >> b >> c >> d;
		long l = min(a, b);
		long r = max(a, b);
		long res = 0;
		for (long i = l; i <= r; i++){
			if (i % c == 0 || i % d == 0){
				res++;
			}
		}
		cout << res;
		cout << endl;
	}
}