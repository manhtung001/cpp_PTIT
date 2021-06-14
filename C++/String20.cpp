#include<bits/stdc++.h>
using namespace std;
string s;
int main(){
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		char s[1005];
		cin.getline(s,1005);
		int k=0;
		char a[105][105];
		char *token=strtok(s," ");
		while(token!=NULL){
			strcpy(a[k++],token);
			token=strtok(NULL," ");
		}
		for(int i=k-1;i>=1;i--){
			cout<<a[i]<<" ";
		}
		cout<<a[0]<<endl;
	}
}
