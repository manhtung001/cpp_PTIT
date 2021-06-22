#include <bits/stdc++.h>
using namespace std;
int n, p;
int slove()
{
    int x = 0;
    while (n != 0)
    {
        n /= p;
        x += n;
    }
    return x;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> p;
        cout << slove() << endl;
    }
}
