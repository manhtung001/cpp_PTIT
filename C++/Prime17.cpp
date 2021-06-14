#include<bits/stdc++.h>
using namespace std;
bool d[1000005];
long long l,r;
void sangnt(){
	for(int i=0;i<=1000000;i++) d[i]=true;
	d[0]=d[1]=false;
	for(int i=2;i<=1000;i++){
		for(int j=i*i;j<=1000000;j+=i){
			d[j]=false;
		}
	}
}
long long a[1000005];
int main(){	
	sangnt();
	int t;
	cin>>t;
	while(t--){
		cin>>l>>r;
		int dem=0;
		for(int i=sqrt(l);i<=sqrt(r);i++){
			if(d[i]) a[dem++]=i;
		}
		if(a[0]*a[0]<l) dem--;
		
		cout<<dem<<endl;
	}
}
