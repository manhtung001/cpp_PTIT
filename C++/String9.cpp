#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int kq=0;
		string s1="";
		for(int i=0;i<s.length();i++){
			if(isdigit(s[i])){
				s1+=s[i];
			}
			else{
				if(s1.length()>0){
					if(stoi(s1)>kq) kq=stoi(s1);
					s1="";
				}
			}
		}
		if(s1.length()>0) if(stoi(s1)>kq) kq=stoi(s1);
		cout<<kq<<endl;
	}
}
