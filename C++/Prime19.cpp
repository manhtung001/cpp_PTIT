#include<bits/stdc++.h>
using namespace std;
int a[10000005];
void sangnt(){
	for(int i=1;i<=10000000;i++){
		a[i]=1;
	}
	a[1]=0;
	for(int i=2;i<=sqrt(10000000);i++){
		if(a[i]){
			for(int j=i*i;j<=10000000;j+=i){
				a[j]=0;
			}
		}
	}
}
int main(){
	sangnt();
		int m,n;
		cin>>m>>n;
		for(int i=min(m,n);i<=max(m,n);i++){
			if(a[i])cout<<i<<" ";
		}
		cout<<endl;
}
