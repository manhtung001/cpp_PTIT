#include<bits/stdc++.h>
using namespace std;
int n,a[1000005];
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n;
		int min1=1e9,min2=1e9;
		for(int i=0;i<n;i++){
			cin>>a[i];
			if(a[i]<min1){
				min2=min1;
				min1=a[i];
			}
			else if(a[i]<min2 && min1!=min2){
				min2=a[i];
			}
		}
		if(min2==min1){
			cout<<-1<<endl;
		}
		else cout<<min1<<" "<<min2<<endl;
	}
}
