#include<bits/stdc++.h>
using namespace std;
int n,m,a[105][105];
void slove(){
	int i=0,j=0,k=0;
	bool isUp=true;
	while(k<n*m){
		if(isUp){
			for(;i>=0&&j<m;i--,j++){
				cout<<a[i][j]<<" ";
				k++;
			}
			if(i<0 && j<m) i=0;
			if(j==m) i+=2,j--;
		}
		else{
			for(;j>=0&&i<n;i++,j--){
				cout<<a[i][j]<<" ";
				k++;
			}
			if(j<0 && i<n) j=0;
			if(i==n) j+=2,i--;
		}
		isUp=!isUp;
	}
	cout<<endl;
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
