#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n;
    cin >> n;
    long long k = n;
    for (long long i = 2; i <= sqrt(k); i++)
    {
        if (k % i == 0)
        {
            cout << i << " ";
        }
        long long dem = 0;
        while (k % i == 0)
        {
            dem++;
            k /= i;
        }
        if (dem > 0)
        {
            cout << dem << endl;
        }
    }
    if (k > 1)
    {
        cout << k << " " << 1;
    }
    return 0;
}