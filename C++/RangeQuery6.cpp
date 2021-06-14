#include<bits/stdc++.h>
using namespace std;
int n,a[10005],dp[10005];
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n;
		for(int i=0;i<n;i++){
			cin>>a[i];
			dp[i]=a[i];
		}
		int res=0;
		for(int i=0;i<n;i++){
			for(int j=0;j<i;j++){
				if(a[i]>a[j]) dp[i]=max(dp[i],dp[j]+a[i]);
			}
			res=max(dp[i],res);
		}
		cout<<res<<endl;
	}
}
