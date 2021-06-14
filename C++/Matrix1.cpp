#include<bits/stdc++.h>
using namespace std;
int r,c,a[1005][1005];
void slove(int n,int m){
	int cot=0, dong=0;
	int tmp;
	while(dong<n && cot<m){
		if(dong+1==n || cot+1==m) break;
		tmp=a[dong+1][cot];
		for(int i=cot;i<m;i++){
			swap(tmp,a[dong][i]);
		}
		dong++;
		for(int i=dong;i<n;i++){
			swap(tmp,a[i][m-1]);
		}
		m--;
		if(dong<n){
			for(int i=m-1;i>=cot;i--){
				swap(tmp,a[n-1][i]);
			}		
		}
		n--;
		if(cot<m){
			for(int i=n-1;i>=dong;i--){
				swap(tmp,a[i][cot]);
			}		
		}
		cot++;
	}
	for(int i=0;i<r;i++){
			for(int j=0;j<c;j++){
				cout<<a[i][j]<<" ";
			}
		}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>r>>c;
		for(int i=0;i<r;i++){
			for(int j=0;j<c;j++){
				cin>>a[i][j];
			}
		}
		int n=r,m=c;
		slove(n,m);
		cout<<endl;
	}
}
