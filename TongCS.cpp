#include <bits/stdc++.h>
using namespace std;

long dem = 0;

void tinhTongCS( long long n) {
	n = abs(n);
	long long sum = 0;
	while(n > 0) {
		sum += n%10;
		n /= 10; 
	}
	dem++;
//	cout<<"sum: "<<sum<<endl;
	if(sum >= 10) tinhTongCS(sum);
}

main()
{
	int t;
	cin >> t;
	while (t--)
	{
		long long n;
		cin>>n;
		tinhTongCS(n);
		cout<<dem<<endl;
		dem = 0;
	}
}
