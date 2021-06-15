#include <bits/stdc++.h>
using namespace std;

main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int a[105][105];
        int b[105][105];

        //nhap
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
            {
                cin >> a[i][j];
                b[i][j] = a[i][j];
            }

        // change
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (a[i][j] == 1)
                {
                    // cho cot j = 1
                    for (int k = 0; k < n; k++)
                        b[k][j] = 1;
                    // cho hang i bang 1
                    for (int k = 0; k < m; k++)
                        b[i][k] = 1;
                }
            }
        }

        // xuat
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
                cout << b[i][j] << " ";
            cout << endl;
        }
        cout << endl;
    }
}
