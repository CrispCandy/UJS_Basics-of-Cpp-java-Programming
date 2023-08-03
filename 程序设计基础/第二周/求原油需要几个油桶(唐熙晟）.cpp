#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	double x, d, h , r , H , v , y ;
	v = 0;
	cin >> x >> d >> h;
	r = d / 2 / 100;
	H = h / 100;
	v = 3.14 * (r *r) * H;
	y = x / v;
	cout << fixed << setprecision(0) << y;
	return 0;
}