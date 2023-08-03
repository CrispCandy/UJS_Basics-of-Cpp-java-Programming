#include<iostream>
using namespace std;
int main()
{
	char s;
	int t, x, y;
	cin >> x >> s >> y;
	if (y == 0)
	{
		exit(0);

	}
	else
	{
		t = x / y;
		x = x % y;
		cout << "Input numerator/denominator:=" << t << "U" << x << "/" << y << endl;

	}
	return 0;
}