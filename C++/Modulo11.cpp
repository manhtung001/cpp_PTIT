#include<iostream>

using namespace std;
long long mulmod(long long a, long long b, long long mod) 
{ 
    long long res = 0; 
    a = a % mod; 
    while (b > 0) 
    { 
        if (b % 2 == 1) 
            res = (res + a) % mod; 
        a = (a * 2) % mod; 
        b /= 2; 
    } 
    return res % mod; 
} 
int main() {
	int t;
	cin >> t;
	while(t--){
		long long a,b,c;
		cin >> a >> b >> c;
		cout<<mulmod(a,b,c)<<endl;
	}
}
