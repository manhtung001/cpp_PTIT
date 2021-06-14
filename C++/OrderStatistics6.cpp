#include<bits/stdc++.h>
using namespace std;
int n;
int b[1000005],c[1000005];
int a[1000005];
int slove(){
	int maxDiff;
	b[0]=a[0];
	for(int i=1;i<n;i++) b[i]=min(a[i],b[i-1]);
	c[n-1]=a[n-1];
	for(int i=n-2;i>=0;i--) c[i]=max(a[i],c[i+1]);
	int i=0,j=0;maxDiff=-1;
	while(i<n && j<n){
		if(b[i]<c[j]){
			maxDiff=max(maxDiff,j-i);
			j++;
		}
		else i++;
	}
	return maxDiff;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n;
		for(int i=0;i<n;i++) cin>>a[i];
		cout<<slove()<<endl;
	}
}
