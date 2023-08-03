#include<iostream>
using namespace std;
int a, b, c,x,y;
int main()
{
	cin >> a >> b;
	c = a ^ b;
	x = c % 10;
	y = c / 100 % 10;
	cout << x << endl;
	cout << y << endl;
	return 0;
}

