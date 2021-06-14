#include<bits/stdc++.h>
using namespace std;
int n,a[1005];
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n;
		for(int i=0;i<n;i++) cin>>a[i];
		sort(a,a+n);
		int i,j;
		for(j=n-1,i=0;i<j;i++,j--){
			cout<<a[j]<<" "<<a[i]<<" ";
		}
		if(i==j) cout<<a[i];
		cout<<endl;
	}
}
