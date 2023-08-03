#include<iostream>
#include<cmath>
using namespace std;
int xuy(int a, int n);
int main() {
	int a, b,j=0,k,u=0;
	cout << "Input a, n: ";
	cin >> a >> b;
	for (j; j < b; j++) {
		k = xuy(a, j);
		u = u + k;
	}
	cout <<"s="<< u;
	return 0;
}
int xuy(int a, int b) {
	int i=0;
	int y,s=0;
	
	for (i; i <= b; i++) {
		y = a * pow(10, i);
		s = s + y;
	}
	return s;
}