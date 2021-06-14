#include<bits/stdc++.h>
using namespace std;
int n,k,a[1005];
void slove(){
	int x,y,s=0,res;
	for(int i=0;i<k;i++) s+=a[i];
	x=0,y=k-1;
	res=s;
	for(int i=k;i<n;i++){
		s-=a[i-k];
		s+=a[i];		
		if(res<s){
			res=s;
			x=i-k+1;
			y=i;
		}
	}
	for(int i=x;i<=y;i++) cout<<a[i]<<" ";
	cout<<endl;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n>>k;
		for(int i=0;i<n;i++) cin>>a[i];
		slove();
	}
}
