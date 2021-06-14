#include<bits/stdc++.h>
using namespace std;
int slove(string s,int k){
	int a[26],res=0;
	for(int i=0;i<s.length();i++){
		memset(a,0,sizeof(a));
		int dem=0;
		for(int j=i;j<s.length();j++){
			if(a[s[j]-'a']==0) dem++;
			a[s[j]-'a']++;
			if(dem==k) res++;
			if(dem>k) break;
		}
	}
	return res;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		string s; int k;
		cin>>s>>k;
		cout<<slove(s,k)<<endl;
	}
}
