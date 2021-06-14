#include<bits/stdc++.h>
using namespace std;
int check(int n){
	int kt=1;
	for(int i=1;i<=sqrt(n);i+=2){
		if(n%i==0 && i!=1){
			kt=i;
			break;
		}
	}
	return kt;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		cout<<1<<" ";
		for(int i=2;i<=n;i++){
			if(i%2==0) cout<<2<<" ";
			else{
				if(check(i)==1) cout<<i<<" ";
				else cout<<check(i)<<" "; 
			}
		}
		cout<<endl;
	}
}
