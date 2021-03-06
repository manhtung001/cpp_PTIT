#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while (t--){
		vector<int> v;
		int n;
		cin >> n;
		for (int i = 0; i < n; i++){
			long long a;
			cin >> a;
			v.push_back(a);
		}
		sort(v.begin(), v.end());
		cout << v[n - 1] << endl;
	}
}