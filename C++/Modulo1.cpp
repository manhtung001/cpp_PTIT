#include<bits/stdc++.h>
using namespace std;
int p;
long long luythua(int n,int k){
	if(k==0) return 1;
	long long x=luythua(n,k/2);
	if(k%2==0) return x*x%p;
	return n*(x*x%p)%p;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int x,y;
		cin>>x>>y>>p;
		cout<<luythua(x,y)<<endl;
	}
}
