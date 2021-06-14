#include<bits/stdc++.h>
using namespace std;
int n,a[100005];
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n;
		int dem=0;
		for(int i=0;i<n;i++) cin>>a[i];
		for(int i=0;i<n-1;i++){
			if(a[i]==a[i+1] && a[i]){
				a[i]*=2;
				a[i+1]=0;
			}
			if(a[i]){
				cout<<a[i]<<" ";
				dem++;
			}
		}
		if(a[n-1]){
			cout<<a[n-1]<<" ";
			dem++;
		}
		for(int i=dem;i<n;i++) cout<<0<<" ";
		cout<<endl;
	}
}
