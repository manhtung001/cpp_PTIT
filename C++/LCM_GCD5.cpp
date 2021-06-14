#include<bits/stdc++.h>
using namespace std;
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
		long long a,x,y;
		cin>>a>>x>>y;
		for(long long i=1;i<=gcd(x,y);i++) cout<<a;
		cout<<endl;
	}
}
