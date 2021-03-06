#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n, t;
        cin >> n >> t;
        long long arr1[n];
        long long arr2[n];
        for (long long i = 0; i < t; i++)
        {
            cin >> arr1[i];
        }
        for (long long i = 0; i < n - t; i++)
        {
            cin >> arr2[i];
        }
        for (long long i = 0; i < n - t; i++)
        {
            cout << arr2[i] << " ";
        }
        for (long long i = 0; i < t; i++)
        {
            cout << arr1[i] << " ";
        }
        cout << endl;
    }
}


#include <bits/stdc++.h> 
using namespace std; 
int gcd(int a, int b) 
{ 
    if (b == 0) 
        return a; 
    else
        return gcd(b, a % b); 
} 

void solve(int arr[], int d, int n) 
{ 
    d = d % n; 
    int x = gcd(d, n); 
    for (int i = 0; i < x; i++) 
	{ 
        int temp = arr[i]; 
        int j = i; 
        while (1) { 
            int k = j + d; 
            if (k >= n) 
                k = k - n; 
            if (k == i) 
                break; 
            arr[j] = arr[k]; 
            j = k; 
        } 
        arr[j] = temp; 
    } 
} 

void coutt(int arr[], int n) 
{ 
    for (int i = 0; i < n; i++) 
        cout << arr[i] << " "; 
} 
int main() 
{ 
	int t;
	cin >> t;
	while(t--)
	{
		int n, d;
		cin >> n >> d;
		int arr[1000];
		for ( int i =0; i<n; i++)
		{
			cin >> arr[i];
		}
		solve(arr, d, n);
		coutt(arr, n);
		cout << endl;
	}
    return 0; 
}
