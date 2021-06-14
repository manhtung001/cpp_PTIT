#include<bits/stdc++.h>
using namespace std;
int tinh(int n,int p){
	long long ans=0;
	for(long long i=1;i<p;i++){
		if((i*i)%p==1){
			long long dem=i + p*(n/p);
			if(dem>n) dem-=p;
			ans+=((dem-i)/p +1);
		}		
	}
	return ans;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int b,p;
		cin>>b>>p;
		cout<<tinh(b,p)<<endl;
	}
}
