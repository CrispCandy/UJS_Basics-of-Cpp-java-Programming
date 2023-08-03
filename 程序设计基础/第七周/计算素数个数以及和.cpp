#include<iostream>
using namespace std;
int main() {
	int i, j;
	int m, n;
	int h = 0, a = 0;
	cout << "Input m: ";
	cin >> m;
	cout << "Input n: ";
	cin >> n;

	for (i = 2; i <= n; i++) {

		for (j = 2; j <= (i / j); j++) {
			if (!(i % j)) {
				break;
			}

		}


		if (j > (i / j)) {
			if (i >= m && i <= n)

			{
				h += i;
				a++;
			}
		}

	}
	cout << "count=" << a << ", " << "sum=" << h;
	return 0;
}