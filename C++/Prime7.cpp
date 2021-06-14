#include<bits/stdc++.h>
using namespace std;
int check(int n){
	int dem=0;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			dem++;
			if(n%(i*i)==0) return 0;
		}
		if(dem>3) return 0;
	}
	if(dem==3) return 1;
	return 0;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		cout<<check(n)<<endl;
	}
}
