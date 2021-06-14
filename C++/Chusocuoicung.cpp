#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int s=0;
		while(n){
			s+=n%10;
			n/=10;
		}
		
		if(s>=10){
			int s1=0;
			while(s){
				s1+=s%10;
				s/=10;
			}
			if(s1>=10){
				int s2=0;
				while(s1){
					s2+=s1%10;
					s1/=10;
				}
				cout<<s2<<endl;
			}
			else cout<<s1<<endl;
		}
		else cout<<s<<endl;
	}
}
