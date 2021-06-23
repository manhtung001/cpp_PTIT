#include<bits/stdc++.h>
using namespace std;
int a[100][100];
int b[100][100];
int c[100][100];
int n,m;

int main() {
	int t;
	cin >> t;
	int dem = 0;
	while(dem != t) {
		cin >> n >> m;
		memset(c, 0, sizeof(c));
 		for(int i = 0; i < n; i++)
  			for(int j = 0; j < m; j++) {
  				cin >> a[i][j];
  				b[j][i] = a[i][j];
			  }
		
		for(int i = 0; i < n; i++) {
  			for(int j = 0; j < n; j++) {
   				for(int l = 0; l < m; l++) {
    				c[i][j] += a[i][l] * b[l][j];
   				}
  			}
 		}
		 dem++;
 		cout<<"Test "<<dem<<":"<<endl;
 		
 		for(int i = 0; i < n; i++) {
  			for(int j = 0; j < n; j++) {
   				cout << c[i][j] << " ";
  			}
  		cout << endl;
 		}		
	}
}
