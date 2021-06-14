#include<iostream> 
#include<cmath>
using namespace std; 
long long a[8]={2,3,5,7,13,17,19,31};
int check(long long n){
	for(int i=0;i<8;i++){
		long long x=1LL*pow(2,a[i]-1)*(pow(2,a[i])-1);
		if(n==x) return 1;
	}
	return 0;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		cout<<check(n)<<endl;
	}
}
