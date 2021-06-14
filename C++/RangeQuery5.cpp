#include<bits/stdc++.h>
using namespace std;
int n,a[1005];
int slove(){
	int d[n+5];
	if(n==0||a[0]==0) return -1;
	d[0]=0;
	for(int i=1;i<n;i++){
		d[i]=1e9;
		for(int j=0;j<i;j++){
			if(i<=j+a[j] && d[j]!=1e9){
				d[i]=min(d[i],d[j]+1);
				break;
			}
		}
	}
	return d[n-1];
}
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n;
		for(int i=0;i<n;i++) cin>>a[i];
		cout<<slove()<<endl;
	}
}
