#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int main()
{
	double a, b, c,P=0,S=0;
	cin >> a >> b >> c;
	P = (a + b + c) / 2;
	if (a + b > c && a + c > b && b + c > a)
	{
		S = sqrt(P * (P - a) * (P - b) * (P - c));
		cout << fixed<<setprecision(2) << S << endl;
	}
	else
		cout << "Not a triangle" << endl;
	return 0;

}