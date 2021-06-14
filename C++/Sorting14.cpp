#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		int R=-1,L=1005;
		map<int,int>d;
		for(int i=0;i<=1000;i++) d[i]=0;
		for(int i=0;i<n;i++){
			cin>>a[i];
			if(a[i]>R) R=a[i];
			if(a[i]<L) L=a[i];
			d[a[i]]=1;
		}
		int dem=0;
		for(int i=L;i<=R;i++){
			if(!d[i]) dem++;
		}
		cout<<dem<<endl;
	}
}
