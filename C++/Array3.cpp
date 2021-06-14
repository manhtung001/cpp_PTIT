#include<bits/stdc++.h>
using namespace std;
int n,k,a[1000005];
void slove(){
	int dem1=0,dem2=0;
	for(int i=0;i<n;i++){
		if(a[i]<=k) dem1++;
	}
	for(int i=0;i<dem1;i++){
		if(a[i]>k) dem2++;
	}
	int dem=dem2;
	for(int i=0,j=dem1;j<n;i++,j++){
		if(a[i]>k) dem2--;
		if(a[j]>k) dem2++;
		dem=min(dem2,dem);
	}
	cout<<dem<<endl;
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
