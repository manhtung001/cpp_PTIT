#include<bits/stdc++.h>
using namespace std;
int n,m,a[1005][1005],b[1005][1005];
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n>>m;
		for(int i=1;i<=n;i++){
			for(int j=1;j<=m;j++){
				cin>>a[i][j];
				b[i][j]=a[i][j];
			}
		}
		for(int i=1;i<=n;i++){
			for(int j=1;j<=m;j++){
				if(a[i][j]==1){
					for(int k=1;k<=n;k++) b[k][j]=1;
					for(int k=1;k<=m;k++) b[i][k]=1;
				}
			}
		}
		for(int i=1;i<=n;i++){
			for(int j=1;j<=m;j++){
				cout<<b[i][j]<<" ";
			}
			cout<<endl;
		}
	}
}
