#include<bits/stdc++.h>
using namespace std;
int n,m,a[1005][1005];
int maxa(int b[]){
	stack<int>st;
	int top_val=0;
	int Smax=0;
	int S=0;
	int i=0;
	while(i<m){
		if(st.empty() || b[st.top()]<=b[i]) st.push(i++);
		else{
			top_val=b[st.top()];
			st.pop();
			S=top_val*i;
			if(!st.empty())
				S=top_val*(i-st.top()-1);
			Smax=max(S,Smax);
		}
	}
	while(!st.empty()){
			top_val=b[st.top()];
			st.pop();
			S=top_val*i;
			if(!st.empty())
				S=top_val*(i-st.top()-1);
			Smax=max(S,Smax);
		}
	return Smax;
}
int HCNmax(){
	int tmp=maxa(a[0]);
	for(int i=1;i<n;i++){
		for(int j=0;j<m;j++){
			if(a[i][j]) a[i][j]+=a[i-1][j];		
		}
		tmp=max(tmp,maxa(a[i]));
	}
	return tmp;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n>>m;
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++) cin>>a[i][j];
		}
		cout<<HCNmax()<<endl;
	}
}
