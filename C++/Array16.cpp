#include<bits/stdc++.h>
using namespace std;
string slove(string s){
	int i=s.length()-2;
	while(i>=0 && s[i]<=s[i+1]) i--;
	if(i>=0){
		int index=-1;
		for(int j=s.length()-1;j>i;j--){
			if(s[j]<s[i]){
				if(index==-1) index=j;
				else if(s[j]>=s[index]) index=j;
			}
			
		}
		if(index!=-1){
			swap(s[index],s[i]);
			return s;
		}
		else return "-1";
	}
	else return "-1";
}
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		cout<<slove(s)<<endl;
	}
}
