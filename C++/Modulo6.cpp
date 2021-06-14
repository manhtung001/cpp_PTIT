#include<bits/stdc++.h>
using namespace std;
long long m;
long long tinh(string a, long long b){
	long long res=0;
	for(int i=0;i<a.length();i++){
		res=(res*10 + (a[i]-'0'))%b;
	}
	return res;
}
long long luythua(long long n,long long k){
	if(k==0) return 1;
	long long x=luythua(n,k/2);
	if(k%2==0) return x*x%m;
	return n*(x*x%m)%m;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		string a; long long b;
		cin>>a>>b>>m;
		long long x=tinh(a,m);
		cout<<luythua(x,b)<<endl;
	}
}
