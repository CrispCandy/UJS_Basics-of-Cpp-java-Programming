#include<iostream>
using namespace std;
int main() {
	int n,a=0;
	cin >> n;
	while (n != 1) {
		if (n % 2 == 1) {
			n = 3 * n + 1;
			a++;
		}
		else if (n % 2 == 0) {
			n = n / 2;
			a++;
		}
	}
	cout << a;
}