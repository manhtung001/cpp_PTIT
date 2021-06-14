#include<bits/stdc++.h>
using namespace std;
int main(){
	char s1[1000]; char s2[50];
	cin.getline(s1,1000); cin.getline(s2,50);
	char *token=strtok(s1," ");
	while(token!=NULL){
		if(strcmp(token,s2)!=0) cout<<token<<" ";
		token=strtok(NULL," ");
	}
	
}
