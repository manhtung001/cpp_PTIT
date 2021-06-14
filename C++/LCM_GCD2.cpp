#include<iostream>
using namespace std;
long long LCM(long long a,long long b){
	long long x=a,y=b;
	while(a%b!=0){
		long long tmp=a%b;
		a=b;
		b=tmp;
	}
	return (x*y/b);
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		long long s=1;
		for(long long i=1;i<=n;i++){
			s=LCM(s,i);
		}
		cout<<s<<endl;
	}
}
