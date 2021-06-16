#include <bits/stdc++.h>
using namespace std;

void In(int arr, int soDong, int soCot)
{

}

main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int m, n;
		cin>>n>>m;
		int arr[n+5][m+5];
		for(int i = 0; i < n; i++) {
			for(int j = 0; j < m; j++) {
				cin>>arr[i][j];
			}
		}
		
		int dong = n - 1, cot = m - 1;
		int i = 0, j = 0;
		int dem = 0;

		while (dem != n * m)
		{
			for (int k = j; k <= cot; k++)
				cout << arr[i][k] << " ";;
			i++;
			for (int k = i; k <= dong; k++)
				cout << arr[k][cot] << " ";;
			cot--;
			for (int k = cot; k >= j; k--)
				cout << arr[dong][k] << " ";;
			dong--;
			for (int k = dong; k >= i; k--)
				cout << arr[k][j] << " ";;
			j++;
			dem++;
		}
		cout<<endl;
	}
}
