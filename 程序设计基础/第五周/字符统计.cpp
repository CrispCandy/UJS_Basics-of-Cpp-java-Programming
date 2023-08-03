#include<iostream>
#include<cstdio>
using namespace std;
int main() {
	int a = 0, b = 0, c = 0, d = 0, x, y;
	char s[225];
	gets_s(s);
	x = strlen(s);
	for (y = 0; y < x; y++) {
		if (s[y] == 'a' || s[y] == 'e' || s[y] == 'i' || s[y] == 'o' || s[y] == 'u')
			a++;
		else if (s[y] == 'A' || s[y] == 'E' || s[y] == 'I' || s[y] == 'O' || s[y] == 'U')
			a++;
		else if ((s[y] >= 'a' && s[y] <= 'z') || (s[y] >= 'A' && s[y] <= 'Z'))
		{
			if (s[y] != 'a' || s[y] != 'e' || s[y] != 'i' || s[y] != 'o' || s[y] != 'u' || s[y] != 'A' || s[y] != 'E' || s[y] != 'I' || s[y] != 'O' || s[y] != 'U')
				b++;
		}
		else if (s[y] >= '0' && s[y] <= '9')
			c++;
		else
			d++;
	}
	cout << a << " " << b << " " << c << " " << d;
	return 0;


}