#include<bits/stdc++.h>
using namespace std;

struct khach {
	int stt;
	int time;
};

bool cmp(khach a, khach b) {
	return a.stt < b.stt;
}

int main() {
	int n;
	cin >> n;
	vector<khach> vt;
	for (int i = 0; i < n; i++) {
		khach tmp;
		cin >> tmp.stt>>tmp.time;
		vt.push_back(tmp);
	}
	sort(vt.begin(), vt.end(), cmp);
	int t = 0;
	for (int i = 0; i < n; i++) {
		while(vt[i].stt > t) t++;
		if(vt[i].stt <= t) t+= vt[i].time;
	}
	cout<<t;
}
