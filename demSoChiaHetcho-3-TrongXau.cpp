#include <bits/stdc++.h>
using namespace std;

// code chua sub

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int id = 1;
        long long res = 0;
        while (id <= s.size())
        {
            for (int i = 0; i <= s.size() - id; i++)
            {
                long long tmp = 0;
                for (int j = i; j < i + id; j++)
                {
                    tmp = tmp * 10 + s[j] - '0';
                }
                if (tmp % 3 == 0)
                    res++;
            }
            id++;
        }
        cout << res << endl;
    }
}