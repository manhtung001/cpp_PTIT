#include<bits/stdc++.h>
using namespace std;
string s;
int k;
int slove(){
	if(k>=26) return 1;
	int a[26]={0};
	for(int i=0;i<s.length();i++){
		a[s[i]-'a']++;
	}
	int dem=0;
	for(int i=0;i<26;i++){
		if(a[i]) dem++;
	}
	if(dem+k>=26) return 1;
	else return 0;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>s>>k;
		cout<<slove()<<endl;
	}
}
