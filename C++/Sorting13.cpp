#include<bits/stdc++.h>
using namespace std;
int	n,m;
long long a[200005];
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n>>m;
		for(int i=0;i<n+m;i++) cin>>a[i];
		sort(a,a+n+m);
		for(int i=0;i<n+m;i++) cout<<a[i]<<" ";
		cout<<endl;
	}
}
