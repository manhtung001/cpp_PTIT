#include <bits/stdc++.h>
using namespace std;

main()
{
    int t;
    cin >> t;
    long check[1000005];
    for (int i = 2; i < 1000005; i++)
        check[i] = true;

    for (int i = 2; i < 100005; i++)
    {
        if (check[i] == true)
        {
            for (int j = 2 * i; j < 1000005; j += i)
            {
                check[j] = false;
            }
        }
    }
    while (t--)
    {
        long long n;
        cin >> n;
        int flag = 0;

        for (long long i = 2; i <= n / 2; i++)
        {
            if (check[i] == true && check[n - i] == true)
            {
                cout << i << " " << n - i;
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            cout << -1;
        }

        cout << endl;
    }
}
