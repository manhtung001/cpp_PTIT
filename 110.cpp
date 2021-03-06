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
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int z;
            cin >> z;
            v.push_back(z);
        }
        sort(v.begin(), v.end());
        cout << v[k - 1];
        cout << endl;
    }
}