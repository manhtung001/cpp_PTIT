#include<iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	while(t){
		long long a[100],n;
		cin >> n;
		for ( int i = 0; i < n ; i++ ) cin >> a[i];
		for (int i = 0 ; i < n  ;i++){
			for (int j = i; j < n;j++){
				if ( a[j] == i ) swap(a[j],a[i]);
				if ( a[j] < n && a[j] > 0) swap( a[ a[j] ], a[j] );
			}
			if ( a[i] != i) a[i] = -1;
		}
		for (int  i = 0 ;i < n; i++) cout << a[i] << " ";
		cout << endl;
		t--;
	}
}
