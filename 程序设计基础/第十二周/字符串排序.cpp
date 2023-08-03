#include<iostream>
#include<vector>
#include<string>
using namespace std;
void xuy(string a[], int n);
int main() {
	int n = 3;
	cin >> n;
	string a[255];
	string k;
	char ch = cin.get();
	vector<string>v1;
	for (int i = 0; i < n; i++) {
		getline(cin, a[i]);
			v1.push_back(a[i]);

	}
	xuy(a, n);
	int i, j;
	string k2;
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - i - 1; j++) {
			if (a[j].length() >= a[j + 1].length()) {
				k2 = a[j];
				a[j] = a[j + 1];
				a[j + 1] = k2;
				//cout << j << "  ";
			}
		}
	}
	cout << endl;
	for (int i = 0; i < n; i++) {
		cout << a[i] << endl;
	}
	return 0;
}
void xuy(string a[], int n) {
	int i, j;
	string k;
	for (i = 1; i < n - 1; i++) {
		for (j = 0; j < n - i - 1; j++) {
			if (a[j].length() >= a[j + 1].length()) {
				k = a[j];
				a[j] = a[j + 1];
				a[j + 1] = k;
			}
		}
	}
}
