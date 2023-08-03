#include<bits/stdc++.h>
using namespace std;
int main() {
	srand(1000);
	int i = 0, l = 0, t = 0, s = 0;
	int n;
	cin >> n;
	double a= 0;
	int xy[200];
	for (i; i < n; i++) {
		
		xy[i] =  rand() % 40+ 10 ;
		if (i >= 5) {
			if (l++ % 5 == 0)
				cout << "\n";
		}

		cout << setw(5) << xy[i];
	}
	int d = xy[0];
	for (int k = 0; k < i; k++)
	{
		if (xy[k] > d)
			d = xy[k];
		t = d;
	}
	for (int j = 0;j < i; j++)
	{
		if (xy[j] < d)
			d = xy[j];
		s = d;
	}
	cout <<"\nmax=" << t << "," << "min=" << s;
	for (int x = 0; x < i; x++) {
		a = a + xy[x];
	}
	cout << "\nsum=" << a << "," << "aver=" <<fixed<<setprecision(2) << a / n;
	return 0;
}