#include<iostream>
#include<cmath>
using namespace std;

void xuy(int x, int y, int z);

int main()
{
	
	int x=0, y=0, z=0; 
	xuy(x, y, z);
	return 0;
}

void xuy(int x, int y, int z)
{
	int sum = 0;
	int t;
	cin >> t;
	for (z = 0; z <= t/10; z++)
	{
		for (y = 0; y <= t/5; y++)
		{
			for (x = 0; x <= t; x++)
			{
				if (x + 5 * y + 10 * z == t)
				{
					sum++;
				}
			}
		}
	}
	cout <<  sum ;
}
