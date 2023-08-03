#include<bits/stdc++.h>
using namespace std;
int main() {
	int n, i = 0;
	double k = 0 ;
	int j = 0, y = 0;
	cin >> n;
	int s[3000];
	for (i; i < n; i++) {
		cin >> s[i];
		
	}
	for (j; j < i; j++) {
		k = k + s[j];
	}
	double h = k / n;
	for (int g = 0; g < i; g++) {
		if (s[g]>h)
			y++;
	}
	cout << y;
	return 0;
}