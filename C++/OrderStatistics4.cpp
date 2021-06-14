#include<iostream>
#include<cstring>
using namespace std;
long long n,a[100005],dp[100005];
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n;
		memset(dp,0,sizeof(dp));
		for(int i=1;i<=n;i++){
			cin>>a[i];
		}
		dp[1]=a[1];
		dp[2]=max(a[1],a[2]);
		for(int i=3;i<=n;i++){
			dp[i]=max(dp[i-1],dp[i-2]+a[i]);
		}
		cout<<dp[n]<<endl;
	}
}
