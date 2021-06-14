#include<bits/stdc++.h>
using namespace std;
long long tinh(string a, long long b){
	long long res=0;
	for(int i=0;i<a.length();i++){
		res=(res*10 + (a[i]-'0'))%b;
	}
	return res;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		string a; long long b;
		cin>>a>>b;
		cout<<tinh(a,b)<<endl;
	}
}
