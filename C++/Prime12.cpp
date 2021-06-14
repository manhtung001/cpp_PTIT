#include<bits/stdc++.h>
using namespace std;
int n,k;
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n>>k;
		for(int i=2;i<=sqrt(n);i++){
			while(n%i==0){
				n/=i;
				k--;
				if(k==0) cout<<i;
				if(n==1) break;
			}
		}
		if(n>1 && k==1) cout<<n;
		else if(k>0)cout<<-1;
		cout<<endl;
	}
}
