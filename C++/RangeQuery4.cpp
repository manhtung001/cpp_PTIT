#include<bits/stdc++.h>
using namespace std;
long long n,a[1000005];
int main(){
	int t;
	cin>>t;
	while(t--){
		long long Max=-1e9;
		cin>>n;
		bool check=false;
		for(int i=0;i<n;i++){
			cin>>a[i];
			if(a[i]>0) check=true;
			if(a[i]>Max) Max=a[i];
		}
		if(!check) cout<<Max<<endl;
		else{
			long long s=0,res=0;
			for(int i=0;i<n;i++){
				if(s+a[i]<0){
					s=0;
					continue;
				}
				s+=a[i];
				res=max(s,res);
			}
			cout<<res<<endl;
		}
		
	}
}
