#include<bits/stdc++.h>
using namespace std;
int l,r,a[100005];
void sangnt(){
	for(int i=0;i<=100000;i++){
		a[i]=1;
	}
	a[0]=0;
	a[1]=0;
	for(int i=2;i<=sqrt(100000);i++){
		for(int j=i*i;j<=100000;j+=i)
		a[j]=0;
	}
}
int main(){
	int t;
	cin>>t;
	sangnt();
	while(t--){
		cin>>l>>r;
		int dem=0;
		for(int i=l;i<=r;i++){
			if(a[i]) dem++;
		}
		cout<<dem<<endl;
	}
}
