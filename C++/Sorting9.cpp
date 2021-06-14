#include<bits/stdc++.h>
using namespace std;
int n,k,a[1005];
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n>>k;
		for(int i=0;i<n;i++) cin>>a[i];
		int dem=0;
		for(int i=0;i<n-1;i++){
			for(int j=i+1;j<n;j++){
				if(a[i]+a[j]==k) dem++;
			}
		}
		cout<<dem<<endl;
	}
}
