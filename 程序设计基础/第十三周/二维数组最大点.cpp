#include<bits/stdc++.h>
using namespace std;
int main() {
	int n, m;
	int max1, max2;
	cin >> n >> m;
	int** a = new int* [n];
	int i, j, k,f,g=0,l=0;
	for (i = 0; i < n; i++) {
		a[i] = new int[m];
	}
	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			cin >> a[i][j];
		}
	}
	for (i = 0; i < n; i++) {
		max1 = a[i][0];
		for (j = 0; j < m; j++) {
			if (max1 <= a[i][j]) {
				max1 = a[i][j];
				k = j;
				f = i;
			}
		}
		
			for (j = 0; j < n; j++) {
				if (max1 >= a[j][k])
					g++;
			}
			if (g == n) {
				cout << max1 << " " << i + 1 << " " << k + 1 << endl;

			}
			g = 0;
		
		
			

		
	}
	

	return 0;
}