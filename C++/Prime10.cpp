#include<bits/stdc++.h>
using namespace std;
int tong(int n){
	int dem=0;
	while(n){
		dem+=n%10;
		n/=10;
	}
	return dem;
}
int nt(int n){
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return n>1;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int s1=0,s2=tong(n);
		if(nt(n)) cout<<"NO"<<endl;
		else{
			for(int i=2;i<=sqrt(n);i++){
				while(n%i==0){
					s1+=tong(i);
					n/=i;
				}
			}
			if(n!=1) s1+=tong(n);
			if(s1==s2) cout<<"YES"<<endl;
			else cout<<"NO"<<endl;
		}
	}
}
