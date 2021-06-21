#include<bits/stdc++.h>
using namespace std;

long long a[105][105];

void quay(int n,int m){
	int cot=0, dong=0;
	long long tmp;
	int cot1 = n, dong1 = m;
	while(dong<n && cot<m){
		if(dong+1 == n || cot+1 == m) break;
		tmp=a[dong+1][cot];
		for(int i=cot;i<m;i++)
			swap(a[dong][i],tmp);
		dong++;
		for(int i=dong;i<n;i++)
			swap(tmp,a[i][m-1]);
		m--;
		if(dong<n){
			for(int i=m-1;i>=cot;i--)
				swap(a[n-1][i],tmp);
		}
		n--;
		if(cot<m){
			for(int i=n-1;i>=dong;i--)
				swap(tmp,a[i][cot]);
		}
		cot++;
	}
	for(int i=0;i<cot1;i++){
			for(int j=0;j<dong1;j++){
				cout<<a[i][j]<<" ";
			}
		}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n, m;
		cin>>n>>m;
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				cin>>a[i][j];
			}
		}
		quay(n,m);
		cout<<endl;
	}
}
