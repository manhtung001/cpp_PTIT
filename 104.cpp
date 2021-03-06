#include <bits/stdc++.h>

using namespace std;

int charToNum(char c)
{
    return (int)c - (int)'0';
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[10];
        memset(arr, 0, sizeof(arr));
        for (int i = 0; i < n; i++)
        {
            string s;
            cin >> s;
            for (int j = 0; j < s.length(); j++)
            {
                int z = charToNum(s[j]);
                arr[z] = 1;
            }
        }
        for (int i = 0; i < 10; i++)
        {
            if (arr[i] == 1)
            {
                cout << i << " ";
            }
        }
        cout << endl;
    }
}