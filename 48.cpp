// matrix 6

#include <bits/stdc++.h>
using namespace std;

main() {
	int t;
    cin >> t;
	while(t--) {
		int n;
		cin >> n;
        int a[n+5][n+5];
		
        for(int i = 0; i < n; i++)
            for(int j = 0; j < n; j++) cin >>a[i][j];

        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                if(i%2 == 0) {
                    cout<<a[i][j]<<" ";
                } else
                {
                    cout<<a[i][n-j-1]<<" ";
                }
                
            }
        }

        cout<<endl;
            
	}
}

