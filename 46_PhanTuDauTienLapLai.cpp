#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int A[100005];
		memset(A, 0, sizeof(A));
        int k, res = -1, only = 0;
        for (long i = 0; i < n; i++)
        {
            cin >> k;
            A[k]++;
            if(A[k] == 2 && only == 0) {
                res = k;
                only = 1;
            }
        }
        cout << res << endl;
    }
}

