#include<bits/stdc++.h>
using namespace std;
int n,k,a[1000005];
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n>>k;
		int dem=0;
		for(int i=0;i<n;i++){
			cin>>a[i];
			if(a[i]==k) dem++;
		}
		if(dem==0) cout<<-1<<endl;
		else cout<<dem<<endl;
		
	}
}
