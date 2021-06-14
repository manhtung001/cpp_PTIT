#include<bits/stdc++.h>
using namespace std;
int n,a[1005],dp1[1005],dp2[1005];
int slove(){
	for(int i=2;i<=n;i++){
			for(int j=1;j<i;j++){
				if(a[i]>a[j] && dp1[i] <dp1[j]+1) dp1[i] =dp1[j]+1;
			}
		}
		for(int i=n-1;i>=1;i--){
			for(int j=n;j>i;j--){
				if(a[i]>a[j] && dp2[i] <dp2[j]+1) dp2[i] =dp2[j]+1;
			}
		}
		int Max=dp1[1]+dp2[1]-1;
		for(int i=2;i<=n;i++){
			if(dp1[i]+dp2[i]-1>Max) Max=dp1[i]+dp2[i]-1;
		}
		return Max;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n;
		for(int i=1;i<=n;i++){
			cin>>a[i];
			dp1[i]=1;
			dp2[i]=1;
		}
		cout<<slove()<<endl;
	}
}
