#include<bits/stdc++.h>
using namespace std;
int GCD(int a,int b){
	while(a*b!=0){
		if(a>b) a%=b;
		else b%=a;
	}
	return a+b;
}
long long LCM(int a,int b){
	return 1LL*a*b/GCD(a,b);
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int a,b;
		cin>>a>>b;
		cout<<LCM(a,b)<<" "<<GCD(a,b)<<endl;
	}
}
