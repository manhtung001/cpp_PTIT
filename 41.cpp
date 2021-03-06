#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		long n, x;
		cin >> n >> x;
		long res = -1;
		for (int i = 1; i <= n; i++){
			long k;
			cin >> k;
			if (k == x){
				res = i;
			}
		}
		cout << res;
		cout << endl;
	}
	
}
