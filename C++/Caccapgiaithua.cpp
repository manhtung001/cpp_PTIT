#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int a[10]={0};
		int n;
		cin>>n;
		string s; cin>>s;
		for(int i=0;i<s.length();i++){
			if(s[i]=='2') a[2]++;
			if(s[i]=='3') a[3]++;
			if(s[i]=='4'){
				a[3]++;
				a[2]+=2;
			}
			if(s[i]=='5') a[5]++;
			if(s[i]=='6'){
				a[5]++;
				a[3]++;
			}
			if(s[i]=='7') a[7]++;
			if(s[i]=='8'){
				a[7]++;
				a[2]+=3;
			}
			if(s[i]=='9'){
				a[7]++;
				a[3]+=2;
				a[2]++;
			}
		}
		for(int i=9;i>=0;i--){
			if(a[i]){
				while(a[i]){
					cout<<i;
					a[i]--;
				}
			}
		}
		cout<<endl;
	}
}
