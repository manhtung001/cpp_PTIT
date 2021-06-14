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
		int dem=0;
		for(int i=0;i<n;i++){
			for(int j=0;j<=i;j++){
				if(s[i]==s[j]) dem++;
			}
		}
		cout<<dem<<endl;
	}
}
