#include<bits/stdc++.h>
using namespace std;
int n;
long long a[1000005],b[1000005],c[20];
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n;
		int k=0;
		memset(b,0,sizeof(b));
		for(int i=0;i<n;i++){
			cin>>a[i];
			while(a[i]){
				int t=a[i]%10;
				if(b[t]==0){
					c[k++]=t;
					b[t]=1;
				}
				a[i]/=10;
			}
		}
		sort(c,c+k);
		for(int i=0;i<k;i++) cout<<c[i]<<" ";
		cout<<endl;
	}
}
