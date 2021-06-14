#include<bits/stdc++.h>
using namespace std;
int a[10005];
void sangnt(){
	for(int i=1;i<=10000;i++){
		a[i]=1;
	}
	a[1]=0;
	for(int i=2;i<=sqrt(10000);i++){
		if(a[i]){
			for(int j=i*i;j<=10000;j+=i){
				a[j]=0;
			}
		}
	}
}
int main(){
	int t;
	cin>>t;
	sangnt();
	while(t--){
		int n;
		cin>>n;
		for(int i=2;i<=n;i++){
			if(a[i]) cout<<i<<" ";
		}
		cout<<endl;
	}
}
