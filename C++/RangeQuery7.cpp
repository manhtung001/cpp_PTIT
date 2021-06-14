#include<bits/stdc++.h>
using namespace std;
int n,x,a[1000005];
int slove(){
	int sum=0,len=n+1;
	int i=0,j=0;
	while(j<n){
		while(sum<=x && j<n){
			sum+=a[j++];
		}
		while(sum>x && i<n){
			len=min(len,j-i);
			sum-=a[i++];
		}
	}
	return len;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n>>x;
		for(int i=0;i<n;i++) cin>>a[i];
		if(slove()==n+1) cout<<-1<<endl;
		else cout<<slove()<<endl;
	}
}
