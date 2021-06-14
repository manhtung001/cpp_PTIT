#include<bits/stdc++.h>
using namespace std;
int main(){
	char s[1000]; 
	cin.getline(s,1000);
	for(int i=0;i<strlen(s);i++){
		if(s[i]>='A' && s[i]<='Z') s[i]+=32;
	}
	char *token=strtok(s," ");
	char a[105][105]; int k=0;
	while(token!=NULL){
		strcpy(a[k++],token);
		token=strtok(NULL," ");
	}
	cout<<a[k-1];
	for(int i=0;i<k-2;i++){
		cout<<a[i][0];
	}
	cout<<a[k-2][0]<<"@ptit.edu.vn";
}
