#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define M 1000000007

int main(){
	int t;
	cin >> t;
	while(t--){
		ll n;
		cin >> n;
		ll a[n+5];
		a[0] = 0; a[1] = 1;
		for(int i = 2 ; i <= n; i++ ) a[i] = ( a[i-1] + a[i-2] ) %M;
		cout<< a[n] << endl;
	}
}
