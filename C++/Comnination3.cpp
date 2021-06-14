#include<bits/stdc++.h>
using namespace std;
int n,a[1005];
bool chuaxet[1005];
void xuat(){
	for(int i=1;i<=n;i++) cout<<a[i];
	cout<<" ";
}
void Try(int i){
	for(int j=1;j<=n;j++){
		if(chuaxet[j]){
			chuaxet[j]=false;
			a[i]=j;
			if(i==n)xuat();
			else Try(i+1);
			chuaxet[j]=true;
		}
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n;
		memset(chuaxet,true,sizeof(chuaxet));
		Try(1);
		cout<<endl;
	}
}
