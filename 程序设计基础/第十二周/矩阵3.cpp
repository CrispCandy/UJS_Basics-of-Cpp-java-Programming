#include<bits/stdc++.h>
using namespace std;
int main() {
	int i, j;
	int n;
	cin >> n;
	for (i = 1; i <= n; i++) {
		for (j = i; j < i + n * n; j += n)
			cout << setw(4) << right << j;
		cout << endl;
	}
	return 0;
}