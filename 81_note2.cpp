#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while (t--){
		long n, k;
		cin >> n >> k;
		long arr[n];
		long length = 0;
		for (int i = 0; i < n; i++){
			cin >> arr[i];
			if (arr[i] <= k){
				arr[i] = 1;
				length += 1;
			} else {
				arr[i] = 0;
			}
		}
		if (length == 0){
			cout << 0 << endl;
			continue;
		}
		long res = 0, max = 0;
		for (long i = 0; i < length; i++){
			if (arr[i] == 1){
				max += 1;
			}
		}
		res = max;
		for (long i = length; i < n; i++){
			if (arr[i] == 1){
				if (arr[i - length] == 0){
					max += 1;
				}
			}
			if (arr[i] == 0){
				if (arr[i - length] == 1){
					max -= 1;
				}
			}
			if (max > res){
				res = max;
			}
		}
		cout << length - res << endl;
	}

}