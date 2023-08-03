#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	long double a, b, c, x, y, t;
	cin >> a >> b >> c;
	y = pow(b, 2) - 4 * a * c;
	if (y < 0) 
	{
		x = -b / (2 * a);
		t = sqrt(-y) / 2 / a;
		cout << "x1=" << x << "+" << t << "i\n";
		cout << "x2=" << x << "-" << t << "i\n";

	}

	else if (a==0)
	{
		if (b == 0 && c == 0)
		{
			cout << "无数个根";
		}
		else
			cout << -c / b;
		
	}
	else if(y>0)
	{
		x = ((0 - b) + sqrt(y)) / 2 / a;
		t = ((0 - b) - sqrt(y)) / 2 / a;
		cout << "x1=" << x << " " << "x2=" << t;

	}
	else if (y == 0)
	{
		x = (0 - b) / 2 / a;
		cout << "x1=x2=" << x;
	}
	return 0;
}
