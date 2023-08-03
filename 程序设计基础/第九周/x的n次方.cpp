#include<bits/stdc++.h>
using namespace std;
int main() {
	double n,s;
	int x;
	cout << "Input x,n:";
	cin >> n >> x;
	s = pow(n, x);
	cout << "\nThe value is:" << fixed<<setprecision(3) << s;
	return 0;

}
