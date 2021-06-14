#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		stack<int>st;
		for(int i=0;i<=s.length();i++){
			if(s[i]=='I' || i==s.length()){
				cout<<i+1;
				while(!st.empty()){
					cout<<st.top();
					st.pop();
				}
			}
			else st.push(i+1);
		}
		cout<<endl;
	}
}
