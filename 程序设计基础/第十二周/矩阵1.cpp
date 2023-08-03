#include<bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin >> n;
	int i, j;
	for (i = 1; i <= pow(n, 2); i++) {
		cout <<setw(4) <<right<< i;
		if (i % n == 0) {
			cout << endl;
		}
	}
	return 0;
}