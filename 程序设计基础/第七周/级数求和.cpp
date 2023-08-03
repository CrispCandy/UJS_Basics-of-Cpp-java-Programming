#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int xuy(int n);
int main() {
	double sum=1;
	int x;
	cout << "Input n: ";
	cin >> x;
	while (x >= 1) {
		sum += (double)1/xuy(x);
		x--;
	}
	cout << "e=" << fixed<<setprecision(4) << sum;
}
int xuy(int n) {
	int x = 1;
	while(n >= 1) {
		x *= n;
		n--;
	}
	return x;
}