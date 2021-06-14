#include<bits/stdc++.h>
using namespace std;
int n,a[1000005];

int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n;
		int max=-1e9;
		for(int i=0;i<n;i++) {
			cin>>a[i];
			if(a[i]>max) max=a[i];
		}
		cout<<max<<endl;
	}
}
