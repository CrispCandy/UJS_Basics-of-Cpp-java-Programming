#include<iostream>
using namespace std;
int main()
{
	char ch = 0;
	int a = 0;
	cin >> ch >> a;
	if (ch >= 48 && ch <= 57)
	{
		if (ch >= (48 + a))
		{
			ch = ch - a;
		}
		else
		{
			ch = ch + 10 - a;
		}
	}
	else if (ch >= 65 && ch <= 90)
	{
		if (ch >= (65 + a))
		{
			ch = ch - a;
		}
		else
		{
			ch = ch + 26 - a;
		}
	}
	else if (ch >= 97 && ch <= 122)
	{
		if (ch > (97 + a))
		{
			ch = ch - a;
		}
		else
		{
			ch = ch + 26 - a;
		}
	}
	cout << char(ch);
	return 0;
	}