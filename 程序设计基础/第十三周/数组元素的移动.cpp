#include<bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin >> n;
	int* a = new int[n];
	int i, j, k=0;
	for (i = 0; i < n; i++) {
		cin >> a[i];
	}
	int x;
	cin >> x;
	int* b = new int[n];
	if (x == n) {
		for (i = 0; i < n; i++)cout << a[i] << " ";
	}
	else if(x==1) {
		for (i = 1; i < n; i++) {
			b[k++] = a[i];
		}
		b[k++] = a[0];
		for (i = 0; i < k; i++)cout << b[i] << " ";
	}
	else if (x > 1 && x < n) {
		for (i = 0; i < x-1; i++) {
			b[k++] = a[i];
		}
		for (i = x ; i < n; i++) {
			b[k++] = a[i];
		}
		b[k++] = a[x-1];
		for (i = 0; i < k; i++)cout << b[i] << " ";
	}
	return 0;
}