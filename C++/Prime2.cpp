#include<bits/stdc++.h>
using namespace std;
long long tinh(long long n){
	long long kq=-1;
	while(n%2==0){
		n/=2;
		kq=2;
	}
	for(int i=3;i<=sqrt(n);i+=2){
		while(n%i==0){
			n/=i;
			kq=i;
		}
	}
	if(n>2) kq=n;
	return kq;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		cout<<tinh(n)<<endl;	
	}
}
