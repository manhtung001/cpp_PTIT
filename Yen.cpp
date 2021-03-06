#include <iostream>
using namespace std;

bool nto(int a)
{
    for (long long i = 2; i * i <= a; i++)
    {
        if (a % i == 0)
        {
            return false;
        };
    };
    return true;
}

int main()
{
    int n;
    do
    {
        cin >> n;
    } while (n <= 0 && n >= 10);

    int a[n + 5];
    string res = "";

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if ( a[i] > 2 && nto(a[i]))
        {
            res += "T";
        }
        else if (a[i] > 0)
        {
            res += "K";
        }
        else
        {
            res += "A";
        };
    };
    cout << res;

    return 0;
}