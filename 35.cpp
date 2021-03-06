#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while (t--){
		long long n, m;
		cin >> n >> m;
		long long max = INT_MIN, min = INT_MAX;
		while (n--){
			long long k;
			cin >> k;
			if (k > max){
				max = k;
			}
		}
		while (m--){
			long long k;
			cin >> k;
			if (k < min){
				min = k;
			}
		}
		cout << max * min;
		cout << endl;
	}
}
