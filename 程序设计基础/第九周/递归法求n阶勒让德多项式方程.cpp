#include<bits/stdc++.h>
using namespace std;

double p(int n, double x);
double p(int n,double x) {
	if (n == 0) return 1;
	else if (n == 1) return x;
	else
		return((2 * n - 1) * x - p(n - 1, x) - (n - 1) * p(n - 2, x)) / n;
}
int main() {
	cout << "please input n, x :";
	int n;
	double x;
	cin >> n >> x;
	cout << "\nThe Value of Legendre polynomials is:" << fixed<<setprecision(6) << p(n, x);
	return 0;
}
