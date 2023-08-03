#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	double x, y;
	cin >> x;
	if (x > 0 && x <= 1000)
		y = 0;
	else if (x > 1000 && x <= 5000)
		y = (x - 1000) * 0.02;
	else if (x > 5000 && x <= 10000)
		y = 80 + (x - 5000) * 0.03;
	else
		y = 80 + 150 + (x - 10000) * 0.05;
	cout <<"Tax="<< fixed << setprecision(2) << y;
	return 0;
		


}