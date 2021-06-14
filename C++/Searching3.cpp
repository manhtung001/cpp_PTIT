#include<bits/stdc++.h>
using namespace std;
int n,a[1000005];
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n;
		int d[n+5]={0};
		for(int i=0;i<n-1;i++){
			cin>>a[i];
			d[a[i]]=1;
		}
		for(int i=1;i<n;i++){
			if(!d[i]){
				cout<<i<<endl;
				break;
			}
		}
	}
}
