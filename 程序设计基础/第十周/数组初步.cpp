#include<bits/stdc++.h>
using namespace std;
int main() {
	int x[10];
	int i = 0,s=0,t=0,l=0;
	for (i; i < 10; i++) {
		cin >> x[i];


		if (l++ % 5 == 0)
			cout << endl;
		cout << left << setw(8) << x[i];

		if (x[i] >= 0)
			s = s + x[i];
		
	}
	cout <<"\nsum=" << s;
	return 0;
}