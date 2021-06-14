#include<bits/stdc++.h>
using namespace std;
int n;
long long a[1000005];
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n;
		int dem=0;
		for(int i=0;i<n;i++){
			cin>>a[i];
			if(a[i]!=0){
				cout<<a[i]<<" ";
				dem++;
			}
		}
		for(int i=0;i<n-dem;i++){
			cout<<0<<" ";
		}
		cout<<endl;
	}
}
