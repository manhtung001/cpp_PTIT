#include<bits/stdc++.h>
using namespace std;
int n,k,a[1005];
void xuat(){
	for(int i=1;i<=k;i++) cout<<a[i];
	cout<<" ";
}
void Try(int i){
	for(int j=a[i-1]+1;j<=n;j++){
		a[i]=j;
		if(i==k) xuat();
		else Try(i+1);
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n>>k;
		a[0]=0;
		Try(1);
		cout<<endl;
	}
}
