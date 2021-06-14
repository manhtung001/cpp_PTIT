#include<bits/stdc++.h>
using namespace std;
string s;
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>s;
		int n=s.length();
		int m=n;
		int i=0;
		while(i>=0 && i<n-2){
			if(s[i]=='1' && s[i+1]=='0' && s[i+2]=='0'){
				s.erase(s.begin()+i);
				s.erase(s.begin()+i);
				s.erase(s.begin()+i);
				if(i==0) i++;
				else i--;
				n=s.length();
			}
			else i++;
		}
		cout<<m-s.length()<<endl;
	}
}
