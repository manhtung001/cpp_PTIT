#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int check[1000007];
        int dem[1000007];
        memset(check, 0, sizeof(check));
        memset(dem, 0, sizeof(dem));

        int a[n + 1];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            dem[a[i]]++;
        }

        int aCheck[m + 1];
        for (int i = 0; i < m; i++)
        {
            cin >> aCheck[i];
            check[aCheck[i]]++;
        }

        vector<int> vt;
        for (int i = 0; i < m; i++)
        {
            if (check[aCheck[i]] >= 1 && dem[aCheck[i]] >= 1)
            {
                while (dem[aCheck[i]] != 0)
                {
                    cout << aCheck[i] << " ";
                    dem[aCheck[i]]--;
                }
            }
        }

        for (int i = 0; i < n; i++)
        {
            if (dem[a[i]] >= 1)
            {
                while (dem[a[i]] != 0)
                {
                    vt.push_back(a[i]);
                    dem[a[i]]--;
                }
            }
        }

        sort(vt.begin(), vt.end());
        for (int i = 0; i < vt.size(); i++)
        {
            cout << vt[i] << " ";
        }
        cout << endl;
    }
}
