#include<iostream>
#include<cmath>
using namespace std;
int main() {
	int n,a=0;
	cin >> n;
	for (; 1;) {
		n = n * 2;
		a++;
		if (n >= 1e8)
			break;
	}
	cout << a<<" Years";
	return 0;
}



