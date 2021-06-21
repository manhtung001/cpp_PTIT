#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v;
        v.clear();
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }
        sort(v.begin(), v.end());
        int b[n + 5];
        int k = 0;
        for (int i = 0; i < n; i += 2)
            b[i] = v[k++];
        for (int i = 1; i < n; i += 2)
            b[i] = v[k++];
        for (int i = 0; i < n; i++)
            cout << b[i] << " ";
        cout << endl;
    }
}
