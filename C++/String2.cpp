#include<bits/stdc++.h>
using namespace std;
string s;
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>s;
		long long res=0;
		for(int i=0;i<s.length();i++){
			if(i%2==0) res+=(s[i]-'0');
			else res-=(s[i]-'0');
		}
		if(res%11==0) cout<<1<<endl;
		else cout<<0<<endl;
	}
}
