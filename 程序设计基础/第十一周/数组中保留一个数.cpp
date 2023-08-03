#include<bits/stdc++.h>
using namespace std;
void xuy(int a[], int x);
int main() {
	int a[1001];
	int n, i;
	cout << "input n of array:"; cin >> n;
	cout << "\ninput numbers of array:";
	for (i = 0; i < n; i++) {
		
		cin >> a[i];
	}
	xuy(a, n);
	int h = 0, m, u, k;
	for (m = 0; m < n - h; m++) {
		for (u = m + 1; u < n - h; u++)
			if (a[u] == a[m]) {
				for (k = u; k < n - h; k++)
					a[k] = a[k + 1];
				h++;
				u++;
			}
	}
	for (int i = 0; i < n - h; i++)
		cout << setw(4) << a[i];
	return 0;
}
void xuy(int a[], int x) {
	int i, j, t, k;
	for (i = 0; i < x - 1; i++) {
		k = i;
		for (j = i + 1; j < x; j++) {
			if (a[j] > a[k])
				k = j;
			if (k != i)
			{
				t = a[i];
				a[i] = a[k];
				a[k] = t;
		 }
		}
	}
}