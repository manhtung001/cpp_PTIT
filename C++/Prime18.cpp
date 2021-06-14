#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int m,n,a,b;
		cin>>m>>n>>a>>b;
		int dem1=0;
		for(int i=min(m,n);i<=max(m,n);i++){
			if(i%a==0 || i%b==0) dem1++;
		}
		cout<<dem1<<endl;
	}
}
