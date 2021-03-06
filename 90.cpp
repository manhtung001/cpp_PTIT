
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n, k;
		cin >> n >> k;
		n = n*n;
		vector<int> st;
		for (int i = 0; i < n; i++){
			int a;
			cin >> a;
			st.push_back(a); 
		}
		sort(vt.begin(), vt.end());
		cout << vt[k - 1];
		cout << endl;
	}
}

// set

#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n, k;
		cin >> n >> k;
		n = n*n;
		set<int> st;
		for (int i = 0; i < n; i++){
			int a;
			cin >> a;
			st.insert(a);                   // chỗ này đã sx tăng dần
		}
	for ( set<int>::iterator it=st.begin(); it!=st.end(); ++it)
        cout << ' ' << *it;
		cout << endl;
	}
}