#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
	int x;
	bool y = false;
	bool z = 0;
	unsigned seed;
		cin >> seed;
		srand(seed);
		for (int i = 0; i < 3; i++)
		{
			x = 1+rand()%13;
			
			switch (x)
			{
			case 1:
			{
				y = true;
				break;
			}
			default:
				z = true;
			}
				
			
			
		}
		
		if (y == true)
		{
			cout << "YES\n";

		}
		else
		{
			cout << "NO\n";
		}
		return 0;
}