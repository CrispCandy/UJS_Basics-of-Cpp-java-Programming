#include<bits/stdc++.h>
using namespace std;


int main() {
	const int z = 25;
	int a[z], i, j, k;
	int n;
	cout << "input n of array:";
	cin >> n;
	cout << "input numbers of array:";
	for (i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (i = 0; i < n - 1; i++) {
		for (j = i + 1; j < n; j++) {
			if (a[j] == a[i])
			{
				for (k = j; k < n - 1; k++)
					a[k] = a[k + 1];
				n--;
					j--;
			}
		}
	}
	for (i = 0; i < n; i++) {
		cout << setw(4) << a[i];
	}
	return 0;
}