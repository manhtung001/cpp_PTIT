#include<bits/stdc++.h>
using namespace std;
int n,x,a[100005];
int check(){
	set<int>s;
	for(int i=0;i<n;i++){
		int tmp1=x+a[i];
		int tmp2=abs(x-a[i]);
		if(s.find(tmp1)!=s.end() || s.find(tmp2)!=s.end()) return 1;
		else s.insert(a[i]);
	}
	return -1;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n>>x;
		for(int i=0;i<n;i++) cin>>a[i];
		cout<<check()<<endl;
	}
}
