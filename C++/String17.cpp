#include<bits/stdc++.h>
using namespace std;
string s;
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int n=s.length();
		int a[26]={0};
		for(int i=0;i<n;i++){
			a[s[i]-'A']++;
		}
		for(int i=0;i<s.length();i++){
			if(a[s[i]-'A']==1) cout<<s[i];
		}
		cout<<endl;
	}
}
