#include<bits/stdc++.h>
using namespace std;
string s;
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int a[26]={0};
		for(int i=0;i<s.length();i++){
			a[s[i]-'a']++;
		}	
		int dem=0;	
		for(int i=0;i<26;i++){
			if(a[i]>dem) dem=a[i];
		}
		int n=s.length();
		int d=n/2;
		if(dem>d) cout<<0<<endl;
		else cout<<1<<endl;
	}
}
