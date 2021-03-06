#include <iostream>
using namespace std;

bool check[10007];

void lauc()
{
    for (long i = 2; i <= 1000005; i++)
        check[i] = true;
    for (long i = 2; i <= 1000005; i++)
    {
        if (check[i] == true)
        {
            for (long j = i * i; j <= 1000005; j += i)
            {
                check[j] = false;
            }
        }
    }
}

int main()
{
    int t;
    lauc();
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        for (long long i = 2; i <= n; i++)
        {
            if (check[i] == true)
            {
                cout << i << " ";
            };
        };
        cout << endl;
    };
    return 0;
}