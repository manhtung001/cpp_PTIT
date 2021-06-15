#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while (t--){
		long n, m;
		cin >> n >> m;
		vector<long long> v;
		while (n--){
			long long k;
			cin >> k;
			v.push_back(k);
		}
		while (m--){
			long long k;
			cin >> k;
			v.push_back(k);
		}
		sort(v.begin(), v.end());
		for (int i = 0; i < v.size(); i++){
			cout << v[i] << " ";
		}
		cout << endl;
	}
}
