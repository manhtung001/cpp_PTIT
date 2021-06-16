#include <bits/stdc++.h>
using namespace std;

main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int maDe;
		cin>>maDe;
		int dem = 0;
		string TraLoi;
		cin.ignore();
		getline(cin, TraLoi);
		if(maDe == 101) {
			string DapAn1 = "A B B A D C C A B D C C A B D";
			for (int i = 0; i < TraLoi.size(); i++) {
				if(DapAn1[i] != ' ' && DapAn1[i] == TraLoi[i]) dem++;
			}
		} else {
			string DapAn2 = "A C C A B C D D B B C D D B B";
			for (int i = 0; i < TraLoi.size(); i++) {
				if(DapAn2[i] != ' ' && DapAn2[i] == TraLoi[i]) dem++;
			}
		}
		float KetQua = (float)dem*10/15;
		cout<<setprecision(2)<<fixed<<KetQua;
	}
}
