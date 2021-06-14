#include<bits/stdc++.h>
using namespace std;
int nt(int n){
	for(int i=2;i<=sqrt(n);i++)
		if(n%i==0) return 0;
	return n>1;
}
int gcd(int a,int b){
	while(a%b!=0){
		int tmp=a%b;
		a=b;
		b=tmp;
	}
	return b;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int dem=0;
		for(int i=1;i<n;i++){
			if(gcd(i,n)==1) dem++;
		}
		if(nt(dem)) cout<<1<<endl;
		else cout<<0<<endl;
	}
}
