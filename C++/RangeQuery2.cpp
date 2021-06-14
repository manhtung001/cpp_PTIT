#include<bits/stdc++.h>
using namespace std;
int n,a[10005],l,r;
string check(int l,int r){
	int i=l;
	while(i<r && a[i]<=a[i+1]) i++;
	if(i==r) return "Yes";
	else{
		while(i<r && a[i]>=a[i+1]) i++;
		if(i==r) return "Yes";
		else return "No";
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n;
		for(int i=0;i<n;i++) cin>>a[i];
		cin>>l>>r;
		cout<<check(l,r)<<endl;
	}
}
