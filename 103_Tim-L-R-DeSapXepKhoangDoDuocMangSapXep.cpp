#include <bits/stdc++.h>

using namespace std;

int arr[1000007];

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            v.push_back(arr[i]);
        }
        sort(v.begin(), v.end());
        int l = 0, r = n - 1;
        while (l < n && arr[l] == v[l])
            l++;
        while (r >= 0 && arr[r] == v[r])
            r--;
        cout << l + 1 << " " << r + 1;
        cout << endl;
    }
}