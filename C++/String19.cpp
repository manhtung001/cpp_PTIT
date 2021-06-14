#include<bits/stdc++.h>
using namespace std;
string s;
int m,n;
long long slove(){
	long long dp[m+5][n];
	memset(dp,0,sizeof(dp));
	dp[0][(s[0]-'0')%n]++;
	for(int i=1;i<m;i++){
		dp[i][(s[i]-'0')%n]++;
		for(int j=0;j<n;j++){
			dp[i][j]+=dp[i-1][j];
			dp[i][(j*10 +(s[i]-'0'))%n]+=dp[i-1][j];
		}
	}
	return dp[m-1][0];
}
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>m>>n>>s;
		cout<<slove()<<endl;
	}
}
