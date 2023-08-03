#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	double a,b;
	cin >> a;
	if (a > 0 && a <= 3)
	{
		b = 8;
		cout << "8";
	}
	else
	{
		b = 8 + (a - 3) * 1.6;
		cout << fixed << setprecision(1) << b;
	}
	
	return 0;
}