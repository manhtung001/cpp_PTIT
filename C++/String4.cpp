#include<bits/stdc++.h>
using namespace std;
string s;
long long slove(){
	int sum[1005],dp[1005][3];
	memset(sum,0,sizeof(sum));
	dp[0][0]=1;
	int cmp=0;
	for(int i=1;i<=s.length();i++){
		int dig=s[i-1]-'0';
		cmp +=dig;
		cmp%=3;
		sum[i]=cmp;
		dp[i][0]=dp[i-1][0];
		dp[i][1]=dp[i-1][1];
		dp[i][2]=dp[i-1][2];
		dp[i][sum[i]]++;
	}
	int ans=0;
	for(int i=1;i<=s.length();i++){
		int dig1=s[i-1]-'0';
		if(dig1==8) ans++;
		if(i-2>=0){
			int dig2=s[i-2]-'0';
			int tmp=dig2*10+dig1;
			if(tmp%8==0 && tmp%3!=0) ans++;
		}
		if(i-3>=0){
			int dig2=s[i-2]-'0';
			int dig3=s[i-3]-'0';
			int tmp=dig3*100 + dig2*10 +dig1;
			if(tmp % 8 !=0) continue;
			ans+=(i-2);
			ans-=dp[i-3][sum[i]];
		}
	}
	return ans;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>s;
		cout<<slove()<<endl;
	}
}
