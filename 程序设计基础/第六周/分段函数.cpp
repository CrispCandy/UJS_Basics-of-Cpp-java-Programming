#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
int main()
{
	double x, y;
	cin >> x;
	if (x < 0)
		cout <<fixed<<setprecision(2) << fabs(x);
	else if (x >= 0 && x < 10)
		cout << fixed << setprecision(2) << exp(x) * sin(x);
	else if (x >= 10 && x < 20)
		cout << fixed << setprecision(2) << pow(x, 3);
	else
	{
		y = (3 + 2 * x) * log(x);
		cout << fixed << setprecision(2) << y;
	}
	return 0;
	    


}