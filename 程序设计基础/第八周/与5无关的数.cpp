#include <iostream>
using namespace std;
bool func1(int n);
int main()
{
	int n, i, j = 0;
	cin >> n;
	for (i = 0; i <= n; i++)
	{
		if (i % 5 == 0 || func1(i))
			j = j;
		else j++;

	}cout << j;
     return 0;
}
bool func1(int n)
{int t = n;
	while (t)
	{
		if (t % 10 == 5) return true;
		t = t / 10;
	}
return false;
}

