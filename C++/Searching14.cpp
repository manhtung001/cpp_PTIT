#include<bits/stdc++.h>
using namespace std;
int n,a[1000005];
int tinh(){
	for(int i=1;i<n;i++){
		for(int j=i-1;j>=0;j--){
			if(a[i]==a[j]){
				return a[i];
			}
		}
	}
	return -1;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n;
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		cout<<tinh()<<endl;
	}
}
