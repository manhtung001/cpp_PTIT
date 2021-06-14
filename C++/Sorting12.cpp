#include<bits/stdc++.h>
using namespace std;
int	n,m;
long long a[100005],b[1000005];
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n>>m;
		long long Max=-1e9,Min=1e9;
		for(int i=0;i<n;i++){
			cin>>a[i];
			if(a[i]>Max) Max=a[i];
		}
		for(int i=0;i<m;i++){
			cin>>b[i];
			if(b[i]<Min) Min=b[i];
		}
		cout<<Max*Min<<endl;
	}
}
