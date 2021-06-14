#include<bits/stdc++.h>
using namespace std;
string s;
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>s;
		int sum=0;
		for(int i=0;i<s.length();i++){
			sum+=(s[i]-'0');
		} 
		if(sum==9 || (sum%9==0 && sum!=0)) cout<<1<<endl;
		else cout<<0<<endl;
	}
}
