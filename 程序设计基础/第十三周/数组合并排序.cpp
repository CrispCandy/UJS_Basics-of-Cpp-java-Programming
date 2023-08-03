#include<bits/stdc++.h>
using namespace std;
int main() {
	int n, m;
	cin >> n;
	int i, j, k;
	int* a = new int[n];
	for (i = 0; i < n; i++) {
		cin >> a[i];
	}
	cin >> m;
	int* b = new int[m];
	for (i = 0; i < m; i++) {
		cin >> b[i];
	}
	int* c = new int[m + n];
	int f = 0;
	for (i = 0; i < n; i++) {
		c[f++] = a[i];
	}
	for (i = 0; i < m; i++) {
		c[f++] = b[i];
	}
	for (i = 0; i < f - 1; i++) {
		for (j = 0; j < f - i - 1; j++) {
			if (c[j] > c[j + 1]) {
				k = c[j];
				c[j] = c[j + 1];
				c[j + 1] = k;
			}
		}
	}
	for (i = 0; i < f; i++)cout << c[i] << "  ";
	return 0;
}
