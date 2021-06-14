#include<bits/stdc++.h>
using namespace std;
long long a[1000005],b[1000005],c[1000005];
int n1,n2,n3;
void slove(){
	int i=0,j=0,k=0;
	int dem=0;
	while(i<n1 && j<n2 && k<n3){
		if(a[i]==b[j] && a[i]==c[k]){
			cout<<a[i]<<" ";
			i++;j++;k++;
			dem++;
		}
		else if(a[i]<b[j]) i++;
		else if(b[j]<c[k]) j++;
		else k++;
	}
	if(dem==0) cout<<-1;
	cout<<endl;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n1>>n2>>n3;
		for(int i=0;i<n1;i++){
			cin>>a[i];
		}
		for(int i=0;i<n2;i++){
			cin>>b[i];
		}
		for(int i=0;i<n3;i++){
			cin>>c[i];
		}	
		slove();
	}
}
