#include <bits/stdc++.h>
using namespace std;
int res[107][107];
int n;
int TongHang() {
	int max1 = -1;
	for(int i = 1; i <= n; i++) {
		int tong1 = 0;
		for(int k = 1; k <= n; k++) {	
			tong1 += res[i][k];
		}
		if(max1 < tong1) max1 = tong1;
	}
	return max1;
}
int TongCot() {
	int max2 = -1;
	for(int j = 1; j <= n; j++) {
		int tong2 = 0;
		for(int v = 1; v <= n; v++) {	
			tong2 += res[v][j];
		}
		if(tong2 > max2) max2 = tong2;
	}
	return max2;
}
main() {
	int t;
	cin >> t;
	while(t--) {
		cin >> n;
		for(int i = 1; i <= n; i++) {
			for(int j = 1; j <= n; j++) {
				cin >> res[i][j];
			}
		}
		int tmp1 = TongCot();
		int tmp2 = TongHang();
		int lastRes = 0;
		for(int i = 1; i <= n; i++) {
			for(int j = 1; j <= n; j++) {
				lastRes += res[i][j];
			}
		}
		cout << max(tmp2,tmp1)*n - lastRes;
		cout << endl;

	}
}