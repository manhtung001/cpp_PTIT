#include<bits/stdc++.h>
using namespace std;
string s;
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>s;
		if(s.length()<2) cout<<0<<endl;
		else{
			int n=s.length();
			if(s[n-2]=='8' && s[n-1]=='6') cout<<1<<endl;
			else cout<<0<<endl;
		}
	}
}
