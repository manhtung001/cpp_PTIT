#include<bits/stdc++.h>
using namespace std;
int n,k,a[1000005];
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n>>k;
		for(int i=0;i<n;i++) cin>>a[i];
		sort(a,a+n);
		cout<<a[k-1]<<endl;
	}
}
