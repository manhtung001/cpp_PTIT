#include<bits/stdc++.h>
using namespace std;
int n;
int a[100005];
void sangnt(){
	for(int i=0;i<=1000;i++){
		a[i]=1;
	}
	a[0]=0;
	a[1]=0;
	for(int i=2;i<=sqrt(1000);i++){
		for(int j=i*i;j<=1000;j+=i)
		a[j]=0;
	}
}
int main(){
	int t;
	cin>>t;	
	sangnt();
	while(t--){
		cin>>n;
		for(int i=2;i*i<n;i++){
			if(a[i]) cout<<i*i<<" ";
		}
		cout<<endl;
	}
}
