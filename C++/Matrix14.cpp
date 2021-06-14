#include<bits/stdc++.h>
using namespace std;
int n,m,a[1005][1005],f[1005][1005];
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n>>m;
		memset(f,0,sizeof(f));
		memset(a,0,sizeof(a));
		for(int i=1;i<=n;i++){
			for(int j=1;j<=m;j++){
				cin>>a[i][j];
				f[i][j]=a[i][j];
			}
		}
		int res=0;
		for(int i=1;i<=n;i++){
			for(int j=1;j<=m;j++){
				if(a[i][j]==0) continue;
				if(a[i][j]==a[i-1][j] && a[i][j]==a[i][j-1] && a[i][j]==a[i-1][j-1])
				f[i][j]=min(f[i-1][j-1],min(f[i-1][j],f[i][j-1]))+1;
				res=max(res,f[i][j]);
			}
		}
		cout<<res<<endl;
	}
}
