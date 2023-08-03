#include<bits/stdc++.h>
using namespace std;
struct ms1
{
	int number;
	char name[50];
	float score;
};

int main() {
	ms1 s[2000];
	int n;
	int i;
	cout << "Input n:";
	cin >> n;
	for (i = 0; i < n; i++) {
		cout << "Input the number,name,score of the " << i+1 << " student:";
		cin >> (s[i].number);
		cin >> (s[i].name);
		cin >> (s[i].score);
	}
	float a, sum = 0;
	for (i = 0; i < n; i++) {
		sum += s[i].score;
	}
	a = sum / n;
	cout << "The average score is:" <<fixed<<setprecision(2) << a;
	return 0;
}