#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	ll t;
	cin >> t;
	ll dem = 1;
	while(dem <= t) {
		
		ll n,m;
		cin >> n >> m;
		ll a[n][m] = {0};
		ll b[m][n] = {0};
		ll c[n][n] = {0};
 		for(ll i = 0; i < n; i++)
  			for(ll j = 0; j < m; j++) {
  				cin >> a[i][j];
  				b[j][i] = a[i][j];
			  }
   		
   		for(ll i = 0; i < n; i++) {
  			for(ll j = 0; j < n; j++) {
   				for(ll l = 0; l < m; l++) {
    				c[i][j] += a[i][l] * b[l][j];
   				}
  			}
 		}
 		
 		cout<<"Test "<<dem <<":"<<endl;
 		dem++;
 		
 		for(ll i = 0; i < n; i++) {
  			for(ll j = 0; j < n; j++) {
   				cout << c[i][j] << " ";
  			}
  			cout << endl;
 		}	
	}
}
