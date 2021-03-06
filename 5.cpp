#include <iostream>
using namespace std;

void run(long long n)
{
    long long a[10000] = {0};
    long long dem = 0;
    long long tmp = n;
    for (long long i = 2; i * i <= n; i++)
    {
        if (tmp % i == 0)
        {
            a[dem++] = i;
            tmp /= i;
            i--;
        };
    };
    if (tmp == n)
    {
        cout << n;
        return;
    };
    if (tmp != 1)
    {
        return run(tmp);
    };
    cout << a[--dem];
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        run(n);
        cout << endl;
    }
    return 0;
}
