#include<bits/stdc++.h>
using namespace std;
int n,a[100005];
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n;
		for(int i=0;i<n;i++) cin>>a[i];
		int Min=-1;
		for(int i=0;i<n-1;i++){
			for(int j=i+1;j<n;j++){
				if(a[i]<a[j] && Min> a[i]-a[j]) Min=a[i]-a[j];
			}
		}
		if(Min==-1) cout<<Min<<endl;
		else cout<<-Min<<endl;
	}
}
