#include<iostream>

using namespace std;

#define N 1000000007

int main() {
	int t;
	cin >> t;
	while(t--){
		long long n,a[100];
		cin >> n;
		a[0] = 0;
		a[1] = 1;
		for(int i = 2 ; i <= 100;i++) a[i] = a[i-1]+a[i-2];
		for(int i = 0; i <=100;i++){
			if(a[i] == n) {
				cout <<"YES" << endl;
				break;
			}
			if( a[i] > n ) {
				cout <<"NO" << endl;
				break;
			}
		}
		}
	}
