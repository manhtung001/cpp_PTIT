
#include <bits/stdc++.h>

using namespace std;

int charToNum(char a){
	return (int)a - (int)'0';
}

char numToChar(int a){
	return (char)(a + (int)'0');
}

int main(){
	int t;
	cin >> t;
	while(t--){
		
		string a, b;
		cin >> a;
		cin >> b;
		
		if (a.length() > b.length()){
			b.insert(0, a.length() - b.length(), '0');
		}
		else if (a.length() < b.length()){
			a.insert(0, b.length() - a.length(), '0');
		}
		
		string res = "";
		int temp = 0;
		for (int i = a.length() - 1; i >= 0; i--){
			int z = charToNum(a[i]) + charToNum(b[i]) + temp;
			temp = (z / 10);
			res.insert(0, 1, numToChar(z % 10));
		}

		if (temp > 0){
			res.insert(0, 1, numToChar(temp));
		}
		
		cout << res;
		cout << endl;
	}
	
}
