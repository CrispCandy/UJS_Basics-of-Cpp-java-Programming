#include <iostream>
using namespace std;
int xuy(int n);
int main() {
	int a,b,i,j,t;
	cin >> a>>b;
	for (i = a; i <= b; i++)
	{
		t = xuy(i);
		if (t > i && xuy(t) == i)
		{
			cout <<i<< ":1";
			for (j = 2; j <= i / 2; j++)
				if (i % j == 0) cout << "+" << j;
			cout << "=" << t << endl;
			cout << t << ":1";
			for (j = 2; j <= t / 2; j++)
				if (t % j == 0) cout << "+" << j;
			cout << "=" << i << endl;
		}
	}
	return 0;
}
int xuy(int n) {
	int i,s=0;
	for (i = 1; i <= n/2; i++)
		if (n % i == 0)
			s += i;
	return s;

}