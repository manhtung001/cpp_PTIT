#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[100007], check = 0;
		for(int i = 0; i < n; i++) 
			cin >> a[i];
		for(int i = 0; i <= n - 2 ; i++){
			for(int j = i + 1; j <= n - 1; j++)
				if(a[i] == a[j]) {
					check ++;
					cout << a[j];
				}
			if(check != 0) break;
		}
		if(check == 0) cout << "NO";
		cout << endl;
	}
}

