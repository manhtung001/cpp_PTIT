#include<bits/stdc++.h>
using namespace std;
string s1,s2;
long long doi65(string s){
	long long tmp=0;
	for(int i=0;i<s.length();i++){
		if(s[i]=='6') s[i]='5';
		tmp=tmp*10 +(s[i]-'0');
	}
	return tmp;
}
long long doi56(string s){
	long long tmp=0;
	for(int i=0;i<s.length();i++){
		if(s[i]=='5') s[i]='6';
		tmp=tmp*10 +(s[i]-'0');
	}
	return tmp;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>s1>>s2;
		cout<<doi65(s1)+doi65(s2)<<" "<<doi56(s1)+doi56(s2)<<endl;
	}
}
