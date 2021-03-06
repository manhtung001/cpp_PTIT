#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while (t--){
		int n, k;
		cin >> n >> k;
		int arr[n];
		for (int i = 0; i < n ; i++){
			cin >> arr[i];
		}
		while(k--){
			int l, r;
			cin >> l >> r;
			long long sum = 0;
			for (int j = l - 1; j < r; j++){
				sum += arr[j];
			}
			cout << sum << endl;
		}
	}
}
