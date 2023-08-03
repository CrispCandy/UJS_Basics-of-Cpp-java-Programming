#include<bits/stdc++.h>
using namespace std;
int main() {
	int m,n;
	cin >> n;
	m = pow(n, 2);
	cout << n << " ";
	if (n < 10 && m % 10 == n)cout << "yes";
	else if (n < 10 && m % 10 != n) cout << "no";
	if (n < 100 && m % 100 == n && n >= 10)cout << "yes";
	else if (n < 100 && m % 100 != n&&n>=10) cout << "no";
	if (n < 1000 && m % 1000 == n&&n>=100)cout << "yes";
	else if (n < 1000 && m % 1000 != n&&n>=100)cout << "no";
	if (n < 10000 && m % 10000 == n&&n>=1000)cout << "yes";
	else if (n < 10000 && m % 10000 != n&&n>=1000)cout << "no";
	cout << "," << n << "*" << n << "=" << m;
}