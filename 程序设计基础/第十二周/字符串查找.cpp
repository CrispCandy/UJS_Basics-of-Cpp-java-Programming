#include<bits/stdc++.h>
using namespace std;
int main() {
	string a;
	string b;
	getline(cin, a);
	getline(cin, b);
	string::size_type xuy;
	xuy = a.find(b);
	if (xuy == string::npos)
		cout << "Not exist!";
	else
		cout << "Exist!";
	return 0;
}