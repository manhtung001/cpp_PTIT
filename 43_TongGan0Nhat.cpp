#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		long n;
		cin >> n;
		long arr[n];
		for (int i = 0; i < n; i++){
			cin >> arr[i];
		}
		long res = INT_MAX;
		for (int i = 0; i < n; i++){
			for (int j = i + 1; j < n; j++){
				long temp = arr[i] + arr[j];
				if (abs(temp) < abs(res)){
					res = temp;
				}
			}
		}
		cout << res << endl;
	}	
}