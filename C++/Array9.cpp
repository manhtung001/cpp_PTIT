#include<bits/stdc++.h>
using namespace std;
long long n,a[100005];
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n;
		for(int i=0;i<n;i++) cin>>a[i];
		long long x=a[0]*a[1];
		long long y=a[n-1]*a[n-2];
		cout<<x<<" ";
		for(int i=1;i<n-1;i++){
			cout<<a[i+1]*a[i-1]<<" ";
		}
		cout<<y<<endl;
	}
}
