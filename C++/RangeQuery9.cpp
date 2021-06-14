#include<bits/stdc++.h>
using namespace std;
int n,a[1005];
void slove(){
	int dem=0;
	while(1){
		for(int i=0;i<n;i++){
			if(a[i]%2==1){
				dem++;
				a[i]--;
			}
		}
		int count=0;
		for(int i=0;i<n;i++){
			if(a[i]%2==0){
				a[i]/=2;
			}
			if(a[i]==0) count++;
		}
		if(count==n) break;
		else dem++;
	}
	cout<<dem<<endl;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n;
		for(int i=0;i<n;i++) cin>>a[i];
		slove();
	}
}
