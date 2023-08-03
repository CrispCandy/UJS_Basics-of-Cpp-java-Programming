#include<bits/stdc++.h>
using namespace std;
int main() {
	string a;
	cout << "Enter an integer:";
	getline(cin, a);
	string b = a;
	reverse(b.begin(), b.end());
	if (a == b) {
		cout<<a << " is a symmetry!";
	}
	else {
		cout<<a<< " is not a symmetry!";
	}
	string x;
	cout << "\nEnter a string:";
	getline(cin, x);
	string y = x;
	reverse(y.begin(), y.end());
	if (x == y) {
		cout << x << " is a symmetry!";
	}
	else {
		cout << x<< " is not a symmetry!";
	}
	return 0;
}