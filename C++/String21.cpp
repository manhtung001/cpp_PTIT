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
		int a[26]={0};
		for(int i=0;i<s.length();i++){
			if(isdigit(s[i])){
				s1+=s[i];
			}
			else{
				a[s[i]-'A']++;
				if(s1.length()>0){
					int x=stoi(s1);
					while(x){
						kq+=x%10;
						x/=10;
					}
					s1="";
				}
			}
		}
		if(s1.length()>0) {
			int x=stoi(s1);
			while(x){
				kq+=x%10;
				x/=10;
			}
		}
		for(int i=0;i<26;i++){
			if(a[i]){
				for(int j=0;j<a[i];j++){
					cout<<(char)(i+'A');
				}
			}
		}
		cout<<kq<<endl;
	}
}
