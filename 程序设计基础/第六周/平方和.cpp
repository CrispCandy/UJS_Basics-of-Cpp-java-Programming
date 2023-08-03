#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int n, x,y=0;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		x = i * i;
		y = y + x;
	}
	cout << y;
	return 0;
}