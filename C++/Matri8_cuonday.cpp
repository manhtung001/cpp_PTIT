#include<bits/stdc++.h>
using namespace std;
int n;
void slove(){
	int m=8*n*n;
	int b[m+5];
	b[0]=8*n*n+2*n;
	int curr=b[0];
	int index=1,step=2,flag=1;;
	while(index<m){
		for(int i=0;i<step;i++){
			curr=b[index++]=curr-4*n*flag;
			if(index>=m) break;
		}
		if(index>=m) break;
		for(int i=0;i<step;i++){
			curr=b[index++]=curr+flag;
			if(index>=m) break;
		}
		flag*=-1;
		step+=2;
	}
	int c[m+5];
	for(int i=0;i<m;i++){
		c[i]=16*n*n+1-b[i];
	}
	for(int i=0;i<m;i++) cout<<b[i]<<" ";
	cout<<endl;
	for(int i=0;i<m;i++) cout<<c[i]<<" ";
	cout<<endl;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n;
		slove();
	}
}
