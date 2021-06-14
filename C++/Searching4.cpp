#include<bits/stdc++.h>
using namespace std;
int n,x,a[1000005];
int binary(int l,int r){
	if(l<=r){
		int mid=(l+r)/2;
		if(a[mid]==x) return mid+1;
		else if(x<a[mid] && x>a[r] || (x<a[mid] && x>a[l])) return binary(l,mid-1);
		else return binary(mid+1,r);
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n>>x;
		for(int i=0;i<n;i++) cin>>a[i];
		cout<<binary(0,n-1)<<endl;
	}
}
