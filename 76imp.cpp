#include <bits/stdc++.h>
#include <string> 

using namespace std;

int lengthNum(long long m){
	int res = 0;
	while (m != 0){
		m /= 10;
		res += 1;
	}
	return res;
}

int charToNum(char s){
	return (int)s - (int)'0';
}

char numToChar(int a){
	return (char)(a + (int)'0');
}

string numToStr(long long m){
	string res = "";
	while (m != 0){
		res.insert(0, 1, numToChar(m % 10));
		m /= 10;
	}
	return res;
}

long long strToNum(string s, int start, int length){
	long long res = 0;
	long long k = 1;
	for (int i = start + length - 1; i >= start; i--){
		res += charToNum(s[i]) * k;
		k *= 10;
	}
	return res;
}

long long xMod(string s, long long m){
	// check string can conver to long long
	int ls = s.length();
	if (ls < 18){
		return strToNum(s, 0, ls) % m;
	}
	// xuli
	int lm = lengthNum(m);
	// 123456 mod 7 ..... a = 12 mod 7 = 5
	long long a = strToNum(s, 0, lm + 1) % m;
	// remove 12 -> 3456
	s.erase(0, lm + 1);

	// insert a = 5 to 3456 -> 53456
	s.insert(0, numToStr(a));
	
	//cout << s << endl;
	
	return xMod(s, m);
}


string _plus(string sa, string sb){
    string sres = "";
    int la = sa.length();
    int lb = sb.length();
    int numZero = abs(la - lb);
    if (numZero > 0){
        if (sa.length() > sb.length()){
            sb.insert(0, numZero, '0');
        }
        if (sb.length() > sa.length()){
            sa.insert(0, numZero, '0');
        }
    }
    int iz = 0;
    for (int i = sa.length() - 1; i >= 0; i--){
        int ic = charToNum(sa[i]) + charToNum(sb[i]) + iz;
        iz = ic / 10;
        ic %= 10;
        sres.insert(0, 1, numToChar(ic));
    }
    if (iz > 0){
        sres.insert(0, 1, numToChar(iz));
    }
    return sres;
}

string muti(string sa, char cb, int numZero){
    string sres = "";
    if (numZero > 0){
        sres.insert(0, numZero , '0');       
    }
    int ib = charToNum(cb);
    int iz = 0;
    for (int i = sa.length() - 1; i >= 0; i--){
        int ic = charToNum(sa[i]) * ib + iz;
        iz = ic / 10;
        ic %= 10;
        sres.insert(0, 1, numToChar(ic));
    }
    if (iz > 0){
        sres.insert(0, 1, numToChar(iz));
    }
    return sres;
}

string nhan(string sa, string sb){
	if (sa == "0" ){
        return sb;
	}
	if (sb == "0"){
		return sa;
	}
    string arr[sb.length()];
    for (int i = 0; i < sb.length(); i++){
        arr[i] = muti(sa, sb[sb.length() - i - 1], i);
    }
    string res = arr[0];
    for (int i = 1; i < sb.length(); i++){
        res = _plus(res, arr[i]);
    }
    return res;
}


int main(){
	int t;
	cin >> t;
	while(t--){
		string a, b;
		long long c;
		cin >> a >> b >> c;
		cout << xMod(nhan(numToStr(xMod(a, c)), numToStr(xMod(b, c))), c) << endl;
	}
}