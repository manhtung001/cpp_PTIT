#include<bits/stdc++.h>
using namespace std;
int n,p;
int slove(){
	int s=0;
	while(n){
		n/=p;
		s+=n;
	}
	return s;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n>>p;
		cout<<slove()<<endl;
	}
}
