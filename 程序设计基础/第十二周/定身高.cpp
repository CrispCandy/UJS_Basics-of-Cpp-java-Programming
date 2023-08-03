#include<bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin >> n;
	int* a = new int[n];
	int i, j, k;
	for (i = 0; i < n; i++)cin >> a[i];
	int sum = 0,t=0;
	for (i = 0; i < n; i++) {
		sum += a[i];
	}
	double p = 0;
	p = (double)sum / n;
	for (i = 0; i < n; i++) {
		if (a[i] > p)
			t++;
	}
	cout << t;
	return 0;
}