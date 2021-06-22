#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, k;
        int check[100005] = {0};
        cin >> n >> k;
        long long a[100005];
        long long max = 0;

        for (long long i = 0; i < n; i++)
        {
            cin >> a[i];
            check[a[i]] = 1;
            if (a[i] > max)
                max = a[i];
        }

        int flag = 0;
        for (long long i = 0; i < n; i++)
        {
            if (check[a[i]] > 0 && check[a[i] + k] > 0 && (a[i] + k) <= max)
            {
                cout << 1 << endl;
                flag++;
                break;
            }
        }
        if (flag == 0)
        {
            cout << -1 << endl;
        }
    }
}
