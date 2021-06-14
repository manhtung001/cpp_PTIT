#include<bits/stdc++.h>
using namespace std;
long long n,a[1005],m=1e9+7;
long long luythua(long long n,long long k){
	if(k==0) return 1;
	long long x=luythua(n,k/2);
	if(k%2==0) return x*x%m;
	return n*(x*x%m)%m;
}
long long gcd(long long a,long long b){
	while(a%b!=0){
		long long tmp=a%b;
		a=b;
		b=tmp;
	}
	return b;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n;
		for(int i=1;i<=n;i++) cin>>a[i];
		long long g=a[1];
		for(int i=2;i<=n;i++){
			g=gcd(g,a[i]);
		}
		long long h=1;
		for(int i=1;i<=n;i++){
			h=h*a[i]%m;
		}
		cout<<luythua(h,g)<<endl;
	}
}
