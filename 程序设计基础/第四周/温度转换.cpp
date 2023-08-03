#include<iostream>
#include<iomanip>
using namespace std;
int func1()
{

	float a, b;
	cin >> a;
	b = 5 * (a - 32) / 9;

	cout << fixed << setprecision(2) << b << endl;

	return 0;

}
int func2()
{

	float a, b;
	cin >> a;
	b = a * 9 / 5 + 32;

	cout << fixed << setprecision(2) << b << endl;

	return 0;

}
int main() {
	int a = 0;
	cin >> a;
	switch (a)
	{
	case 1:
		func1();
		break;
	case 2:
		func2();
		break;
	default:
		cout << "ERROR";
	}

}