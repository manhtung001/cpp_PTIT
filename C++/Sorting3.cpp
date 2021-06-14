#include<bits/stdc++.h>
using namespace std;
struct data{
	int a,cs;
};
int n;
bool cmp(data x,data y){
	if(x.a>y.a) return false;
	if(x.a==y.a && x.cs>y.cs) return false;
	return true;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n;
		vector<data>v(n);
		for(int i=0;i<n;i++){
			cin>>v[i].a;
			v[i].cs=i;
		}
		sort(v.begin(),v.end(),cmp);
		int dem=0;
		for(int i=0;i<n;i++){
			while(v[i].cs != i){
				dem++;
				swap(v[i],v[v[i].cs]);
			}
		}
		cout<<dem<<endl;
	}
}
