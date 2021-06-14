#include<bits/stdc++.h>
using namespace std;
int fibo(int n){
	int a=5*n*n-4;
	int b=5*n*n+4;
	int c=sqrt(a);
	int d=sqrt(b);
	if(c*c==a || d*d==b) return 1;
	else return 0;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[105];
		for(int i=0;i<n;i++){
			cin>>a[i];
			if(fibo(a[i])) cout<<a[i]<<" ";
		}
		cout<<endl;
	}
}
