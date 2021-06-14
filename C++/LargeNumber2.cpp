#include<bits/stdc++.h>
using namespace std;
string s1,s2;
void slove(){
	if(s1.length()>s2.length()) swap(s1,s2);
	string s="";
	int n1=s1.length(),n2=s2.length();
	reverse(s1.begin(),s1.end());
	reverse(s2.begin(),s2.end());
	int sum=0;
	for(int i=0;i<n1;i++){
		int res=(s1[i]-'0') + (s2[i]-'0') +sum;
		s+=(res%10 +'0');
		sum=res/10;
	}
	for(int i=n1;i<n2;i++){
		int res=(s2[i]-'0') +sum;
		s+=(res%10 +'0');
		sum=res/10;
	}
	if(sum) s+=(sum+'0');
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
