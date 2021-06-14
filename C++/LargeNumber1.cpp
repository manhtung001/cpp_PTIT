#include<bits/stdc++.h>
using namespace std;
string s1,s2;
bool isSmall(string s1,string s2){
	int n1=s1.length(),n2=s2.length();
	if(n1<n2) return true;
	if(n1>n2) return false;
	for(int i=0;i<n1;i++){
		if(s1[i]<s2[i]) return true;
		else if(s1[i]>s2[i]) return false;
	}
	return false;
}
void slove(){
	if(isSmall(s1,s2)) swap(s1,s2);
	int n1=s1.length(),n2=s2.length();
	reverse(s1.begin(),s1.end());
	reverse(s2.begin(),s2.end());
	int ans=0;
	string s="";
	for(int i=0;i<n2;i++){
		int res=(s1[i]-'0')-(s2[i]-'0')-ans;
		if(res<0){
			ans=1;
			res=res+10;
			s+=(res+'0');
		}
		else {
			ans=0;
			s+=(res+'0');
		}
	}
	for(int i=n2;i<n1;i++){
		int res=(s1[i]-'0')-ans;
		if(res<0){
			ans=1;
			res=res+10;
			s+=(res+'0');
		}
		else{
			ans=0;
			s+=(res+'0');
		}
	}
	reverse(s.begin(),s.end());
	cout<<s<<endl;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>s1>>s2;
		slove();
	}
}
