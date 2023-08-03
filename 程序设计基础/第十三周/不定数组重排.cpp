#include<bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin >> n;
	int* a = new int[n];
	int i, j,k;
	for (i = 0; i < n; i++)cin >> a[i];
	for(i = 0; i < n - 1; i++) {
		for (j = 0; j < n - i - 1; j++) {
			if (a[j] > a[j + 1]) {
				k = a[j];
				a[j] = a[j + 1];
				a[j + 1] = k;
			}
		}
	}
	for (i = 0; i < n; i++) {
		cout << a[i] << "  ";
	}
	return 0;
}