#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
double pi = 3.1415926;
double xuy(int n);

int main() {
	double v[100] = { 0 };
	int i;
	for (i = 0; i < 100; i++)
		v[i] = xuy(i + 1);
	double n;
	cin >> n;
	int k = 0;
	while (v[k] < n && k < 100)
		k++;
	cout << k + 1 << ",";
	cout << fixed<<setprecision(2) << xuy(k+1 );
	return 0;

}
double xuy(int n) {
	double v = 0;
	v = pi * pow(n, 3) * 4 *1.0/ 3;
	return v;
}
