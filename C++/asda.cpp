#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long n,m;
		cin>>n>>m;
		long a[n+1],b[m+1];
		vector <long> vt;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			vt.push_back(a[i]);
		}
		for(int i=0;i<m;i++)
		{
			cin>>b[i];
			vt.push_back(b[i]);
		}
		sort(vt.begin(),vt.end());
		for(int i=0;i<vt.size();i++)
		{
			cout<<vt[i]<<" ";
		}
		cout<<endl;
	}
}
