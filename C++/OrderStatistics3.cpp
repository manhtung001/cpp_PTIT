#include<bits/stdc++.h>
using namespace std;
int n,k,a[1000005];
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n>>k;
		for(int i=1;i<=n*n;i++)cin>>a[i];
		sort(a+1,a+n*n+1);
		cout<<a[k]<<endl;
	}
}
