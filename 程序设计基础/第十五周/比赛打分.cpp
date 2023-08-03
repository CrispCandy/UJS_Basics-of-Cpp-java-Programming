#include<bits/stdc++.h>
using namespace std;
struct m1
{
	char name[20];
	int score[7];
	double average;
	int min;
	int max;
	double total;
}s[100];
bool cmp(m1 x, m1 y) {
	if (x.average > y.average)
		return 1;
	return 0;
}
int main() {
	int n, i, j;
	cout << "请输入比赛选手人数：\n";
	cin >> n;
	cout << "请输入比赛选手的比赛数据：\n";
	for (i = 0; i < n; i++) {
		cin >> (s[i].name);
		s[i].max = 0;
		s[i].min = 100;
		s[i].total = 0;
		for (j = 0; j < 7; j++) {
			cin >> (s[i].score[j]);
			s[i].total += s[i].score[j];
			if (s[i].score[j] >= s[i].max)
				s[i].max = s[i].score[j];
			if (s[i].score[j] <= s[i].min)
				s[i].min = s[i].score[j];
		}
		s[i].total = s[i].total - s[i].max - s[i].min;
		s[i].average = s[i].total / 5;

	}
	for (i = 0; i < n; i++) {
		sort(s, s + n, cmp);
		for (i = 0; i < n; i++) {
			
			cout  <<setw(5) << right << s[i].name << ":";
			for (j = 0; j < 7; j++)
				cout << setw(5)  << s[i].score[j];
			cout<< setw(5) << s[i].average << endl;
		}
	}
	return 0;
}