#include<bits/stdc++.h>
using namespace std;
int n,m,a[1000005],b[1000005];
int tim(int x,int c[]){
	if(x==0) return 0;
	if(x==1) return c[0];
	int *dem=upper_bound(b,b+m,x);
	int res=(b+m)-dem;
	res+=(c[0]+c[1]);
	if(x==2) res-=(c[3]+c[4]);
	if(x==3) res+=c[2];
	return res;
}
int tinh(){
	int c[5]={0};
	for(int i=0;i<m;i++){
		if(b[i]<5) c[b[i]]++;
	}
	sort(b,b+m);
	int dem=0;
	for(int i=0;i<n;i++){
		dem+=tim(a[i],c);
	}
	return dem;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n>>m;
		for(int i=0;i<n;i++) cin>>a[i];
		for(int i=0;i<m;i++) cin>>b[i];
		cout<<tinh()<<endl;
	}
}
