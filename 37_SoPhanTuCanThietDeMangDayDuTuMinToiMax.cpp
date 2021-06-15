#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while (t--){
		long n;
		cin >> n;
		int arr[100007];	// 1007 la sai
		memset(arr, 0, sizeof(arr));
		long max = INT_MIN, min = INT_MAX;
		while (n--){
			long k;
			cin >> k;
			arr[k]++;
			if (k > max){
				max = k;
			}
			if (k < min){
				min = k;
			}
		}
		long res = 0;
		for (long i = min; i <= max; i++){
			if (arr[i] == 0){
				res++;
			}
		}
		cout << res;
		cout << endl;
	}
}
