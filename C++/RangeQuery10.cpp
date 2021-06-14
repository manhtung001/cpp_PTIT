#include<bits/stdc++.h>
using namespace std;
int n,a[1005];
int slove(){
	int ans=0;
	int i=0,j=n-1;
	while(i<=j){
		if(a[i]==a[j]){
			i++; j--;
		}
		else if(a[i]>a[j]){
			j--;
			a[j]+=a[j+1];
			ans++;
		}
		else if(a[j]>a[i]){
			i++;
			a[i]+=a[i-1];
			ans++;
		}
	}
	return ans;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n;
		for(int i=0;i<n;i++) cin>>a[i];
		cout<<slove()<<endl;
	}
}
