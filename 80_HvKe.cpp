#include <bits/stdc++.h>

using namespace std;

void HvKe(int a[], int n)
{
    for (int i = 1; i <= n; i++)
        a[i] = i;
    while (1)
    {
        for (int i = 1; i <= n; i++)
            cout << a[i];
        cout << " ";
        int i = n - 1;
        while (i > 0 && a[i] > a[i + 1])
            i--;
        if (i == 0)
            return; //Da o hoan vi cuoi cung;
        int k = n;
        while (a[i] > a[k)
            k--;
        int tmp = a[i];
        a[i] = a[k];
        a[k] = tmp;
        int l = i + 1;
        int r = n;
        while (l < r)
        {
            tmp = a[l];
            a[l] = a[r];
            a[r] = tmp;
            l++;
            r--;
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n + 5];
        HvKe(a, n);
        cout << endl;
    }
}