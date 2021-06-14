#include<bits/stdc++.h>
using namespace std;
int n,a[100005];
int main(){
	int t;
	cin>>t;
	while(t--){
		int Max=-1e9;
		cin>>n;
		for(int i=0;i<n;i++){
			cin>>a[i];
			if(a[i]>Max) Max=a[i];
		}
		int dem=0;
		for(int i=1;i<=Max;i++){
			int mod=a[0]%i;
			for(int j=1;j<n;j++){
				if(a[j]%i!=mod) break;
				if(j==n-1 ) dem++;
			}
		}
		cout<<dem<<endl;
	}
}
