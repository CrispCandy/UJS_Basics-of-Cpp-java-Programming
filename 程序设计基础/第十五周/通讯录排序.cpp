#include<bits/stdc++.h>
using namespace std;
struct m1
{
	char name[50];
	long long birthday;
	char number[100];
};
bool cmp(m1 x, m1 y) {
	if (x.birthday < y.birthday)
		return 1;
	return 0;
}
int main() {
	m1 s[20];
	int n, i, j;
	cout << "Input n:";
	cin >> n;
	for (i = 0; i < n; i++) {
		cout << "Input the name,birthday,number of the " << i + 1 << " friend:";
		cin >> (s[i].name);
		cin >> (s[i].birthday);
		cin >> (s[i].number);
	}
	sort(s, s + n, cmp);
	for (i = 0; i < n; i++) {
		cout << s[i].name<<" ";
		cout << s[i].birthday<<" ";
		cout << s[i].number << endl;
	}

	return 0;
}