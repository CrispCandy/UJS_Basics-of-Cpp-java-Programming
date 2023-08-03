#include<bits/stdc++.h>
using namespace std;
int main() {
	
	int n, m;
	int i, j, k=0;
	cin >> n;
	int* a = new int[n];
	for (i = 0; i < n; i++)cin >> a[i];
	cin >> m;
	int* b = new int[m];
	for (i = 0; i < m; i++)cin >> b[i];
	int* c = new int[m+n];
	for (i = 0; i < n+m; i++) {
		if (i < n && i < m) {
			if (a[i] >= b[i]) {
				c[k++] = b[i]; c[k++] = a[i];
			}
			else if (a[i] < b[i]) {
				c[k++] = a[i]; c[k++] = b[i];
			}
		}
		else if (i < n && i >= m)
			c[k++] = a[i];
		else if (i >= n && i < m)
			c[k++] = b[i];
		else break;
	}
	int* d = new int[k];
	int f = 0;
	for ( i = 0; i < k; i++) {
		j = 0;
		for (; j < f; j++) {
			if (c[i] == d[j])break;
		}
		if (j == f) {
			d[f] = c[i];
			f++;
		}
	}
	for (i = 0; i <f ; i++)
		cout << d[i] << "  ";
return 0;
}
