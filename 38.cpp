#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while (t--){
		long n, k, res = -1;
		cin >> n >> k;
		for (int i = 1; i <= n; i++){
			long z;
			cin >> z;
			if (z == k && res == -1){
				res = i;
			}
		}
		cout << res;
		cout << endl;
	}
}
