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
	for(int i=0;i<k-2;i++){
		a[i][0]-=32;
		cout<<a[i]<<" ";
	}
	a[k-2][0]-=32;
	cout<<a[k-2]<<", ";
	for(int i=0;i<strlen(a[k-1]);i++){
		a[k-1][i]-=32;
	}
	cout<<a[k-1];
}
