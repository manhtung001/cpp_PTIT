#include <bits/stdc++.h>

using namespace std;

char numToChar(int n){
	return (char)(n + '0');
}

string findMax(int m, int s){
	if (s == 0 || s > 9 * m){
		return "-1";
	}
	string res = "";
	while (s > 9){
		s -= 9;
		res += "9";
	}
	if (s > 0){
		res += numToChar(s);
	}
	int l = m - res.length();
	res.insert(res.length(), l, '0');
	return res;
}

string findMin(int m, int s){
	if (s == 0 || s > 9 * m){
		return "-1";
	}
	string res = "";
	while (s > 9){
		s -= 9;
		res += "9";
	}
	int l = m - res.length();
	if (l == 1) {
		res.insert(0, 1, numToChar(s));
		return res;
	}
	s -= 1;
	res.insert(0, 1, '1');
	if (s > 0){
		res.insert(1, 1, numToChar(s));
	}
	l = m - res.length();
	res.insert(1, l, '0');
	return res;
}

int main (){
	int m, s;
	cin >> m >> s;
	string sMax = findMax(m, s);
	string sMin = findMin(m, s);
	if (sMin == "-1" || sMax == "-1"){
		cout << "-1 -1";
		return 0;
	}
	cout << sMin << " " << sMax;
	return 0;
}