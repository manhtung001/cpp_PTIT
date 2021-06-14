#include<bits/stdc++.h>
using namespace std;
string s;
int chuyen(int n){
	if(n==0) return 1;
	if(n%4==1) return 2;
	if(n%4==2) return 4;
	if(n%4==3) return 8;
	if(n%4==0 && n>0) return 6;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>s;
		reverse(s.begin(),s.end());
		int sum=0;
		for(int i=0;i<s.length();i++){
			if(s[i]=='1'){
				sum+=chuyen(i);
			}
		}
		if(sum%5==0) cout<<"Yes"<<endl;
		else cout<<"No"<<endl;
	}
}
