#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, n, k;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        int dem = 0;
        int tmp;
        for (long i = 0; i < n; i++)
        {
            cin >> tmp;
            if(tmp == k) {
                dem++;
            }
        }
        if(dem==0) {
            cout << -1 << endl;
        }
        else
        {
            cout<<dem << endl;
        }
    }
}
