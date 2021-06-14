#include<bits/stdc++.h>
using namespace std;
int n,m;
char a[105][105];
void dequy(int x,int y,char dau_, char dauO){
	if(x<0 || x>=n || y<0 || y>=m) return;
	if(a[x][y]!=dau_) return;
	a[x][y]=dauO;
	dequy(x+1,y,dau_,dauO);
	dequy(x-1,y,dau_,dauO);
	dequy(x,y+1,dau_,dauO);
	dequy(x,y-1,dau_,dauO);
}
void slove(){
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(a[i][j]=='O') a[i][j]='-';
		}
	}
	for(int i=0;i<n;i++){
		if(a[i][0]=='-')
			dequy(i,0,'-','O');
	}
	for(int i=0;i<n;i++){
		if(a[i][m-1]=='-')
			dequy(i,m-1,'-','O');
	}
	for(int i=0;i<m;i++){
		if(a[0][i]=='-')
			dequy(0,i,'-','O');
	}
	for(int i=0;i<m;i++){
		if(a[n-1][i]=='-')
			dequy(n-1,i,'-','O');
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(a[i][j]=='-') a[i][j]='X';
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n>>m;
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++) cin>>a[i][j];
		}
		slove();
	}
}
