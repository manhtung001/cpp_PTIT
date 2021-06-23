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
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        long long res = 0;
        for (int i = 0; i < n - 1; i++)
        {
            long long min;
            for (int j = i + 1; j < n; j++)
            {
                min = abs(a[i] - a[j]);
                if (min < k)
                    res++;
            }
        }
        cout << res << endl;
    }
}