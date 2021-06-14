#include<bits/stdc++.h>
using namespace std;
int n,a[105][105];
int slove(){
	int tongH[n+5],tongC[n+5];
	memset(tongH,0,sizeof(tongH));
	memset(tongC,0,sizeof(tongC));
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			tongH[i]+=a[i][j];
			tongC[j]+=a[i][j];
		}
	}
	int tongmax=0;
	for(int i=0;i<n;i++){
		tongmax=max(tongmax,tongH[i]);
		tongmax=max(tongmax,tongC[i]);
	}
	int i=0,j=0,dem=0;
	while(i<n && j<n){
		int tmp=min(tongmax-tongH[i],tongmax-tongC[j]);
		tongH[i]+=tmp;
		tongC[j]+=tmp;
		dem+=tmp;
		if(tongH[i]==tongmax) i++;
		if(tongC[j]==tongmax) j++;
	}
	return dem;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n;
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++) cin>>a[i][j];
		}
		cout<<slove()<<endl;
	}
}
