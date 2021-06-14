#include<bits/stdc++.h>
using namespace std;
struct data{
	int a,b;
};
int n;
bool cmp(data x, data y){
	if(x.b<y.b) return false;
	if(x.b==y.b && x.a>y.a) return false;
	return true;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n;
		vector<data>v(n+5);
	//	v.clear();
		int d[100005]={0};
		for(int i=0;i<n;i++){
			cin>>v[i].a;
			d[v[i].a]++;
		}
		for(int i=0;i<n;i++){
			v[i].b=d[v[i].a];
		}
		sort(v.begin(),v.end(),cmp);
		for(int i=0;i<n;i++) cout<<v[i].a<<" ";
		cout<<endl;
	}
}
