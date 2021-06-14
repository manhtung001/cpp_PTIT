#include<bits/stdc++.h>
using namespace std;
int d[8]={-1,-1,-1,0,0,1,1,1};
int c[8]={-1,0,1,-1,1,-1,0,1};
int n,m,a[105][105];
bool visited[105][105];
int check(int i,int j){
	return (i>=0 && i<n && j>=0 && j<m && a[i][j] && visited[i][j]);
}
void DFS(int dong,int cot){
	visited[dong][cot]=false;
	for(int i=0;i<8;i++){
		if(check(dong+d[i],cot+c[i])) DFS(dong+d[i],cot+c[i]);
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n>>m;
		memset(visited,true,sizeof(visited));
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++) cin>>a[i][j];
		}
		int dem=0;
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				if(a[i][j] && visited[i][j]){
					DFS(i,j);
					dem++;
				}
			}
		}
		cout<<dem<<endl;
	}
}
