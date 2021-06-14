#include<bits/stdc++.h>
using namespace std;
int r,c,a[105][105];
void slove(int n,int m){
	int dong=0,cot=0;
	while(dong<n && cot<m){
		if(dong+1==n && cot+1==m) break;
		for(int i=cot;i<m;i++) cout<<a[dong][i]<<" ";
		dong++;
		for(int i=dong;i<=n-1;i++) cout<<a[i][m-1]<<" ";
		m--;
		if(dong<n){
			for(int i=m-1;i>=cot;i--) cout<<a[n-1][i]<<" ";
		}
		n--;
		if(cot<m){
			for(int i=n-1;i>=dong;i--) cout<<a[i][cot]<<" ";
		}
		cot++;
	}
	cout<<endl;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>r>>c;
		int n=r,m=c;
		for(int i=0;i<r;i++){
			for(int j=0;j<c;j++){
				cin>>a[i][j];
			}
		}
		slove(n,m);
	}
}
