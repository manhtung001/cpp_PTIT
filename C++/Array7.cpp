#include<bits/stdc++.h>
using namespace std;
int n;
vector<string>res;
int slove(string a,string b){
	string ab=a.append(b);
	string ba=b.append(a);
	if(ab.compare(ba)>0) return 1;
	return 0;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		res.clear();
		cin>>n;
		for(int i=0;i<n;i++){
			int x;
			cin>>x;
			res.push_back(to_string(x));
		}
		sort(res.begin(),res.end(),slove);
		for(int i=0;i<res.size();i++) cout<<res[i];
		cout<<endl;
	}
}
