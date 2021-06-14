#include<iostream>
#include<cmath>
using namespace std;
long long LCM(long long a,long long b){
	long long m=a,n=b;
	while(a%b!=0){
		long long tmp=a%b;
		a=b;
		b=tmp;
	}
	return m*n/b;
}
long long lcm(long long a,long long b,long long c){
	long long bc=LCM(a,b);
	return LCM(bc,c);
}
long long tinh(long long n, long long x, long long y, long long z) 
{ 
 
    long long a = lcm(x, y, z); 
    long long m = pow(10, n-1); 
    long long k = m % a; 
    if (k == 0) 
         return m; 
    m += a - k; 
    if (m < pow(10, n)) 
        return m; 
    else
        return 0; 
} 
int main() 
{ 
    int t;
    cin>>t;
    while(t--){
    	long long x,y,z,n;
    	cin>>x>>y>>z>>n;
    	long long res=tinh(n,x,y,z);
    	if(res!=0) cout<<res<<endl;
    	else cout<<-1<<endl;
	}
}
