#include<bits/stdc++.h>
using namespace std;
int m = 0, n = 0;
class Time {
	int hour;
	int minute;
	int second;
public:
	int Sethour(int h1) {
		hour = h1 ;
		return hour;
	}
	int Setmin(int min1) {
		if (min1 > 0 && min1  < 60)
			minute = min1 ;
		else {
			
			minute = min1  - 60;
		}
		return minute;
	}
	int Setsec(int sec1) {
		if (sec1 > 0 && sec1 < 60)
			second = sec1;
		else {
			
			second = sec1 - 60;
		}
		return second;
	}
	int Gethour(int h1, int h2) {
		hour = h1 + h2 ;
		return hour;
	}
	int Getmin(int min1, int min2) {
		if ((min1 + min2 + n) > 0 && (min1 + min2 + n) < 60) {
			minute = min1 + min2 ;
		}
		else if ((min1 + min2 + n) >= 60) {
			m++;
			minute = min1 + min2  - 60;
		}
		return minute;
	}
	int Getsec(int sec1, int sec2) {
		if ((sec1 + sec2) > 0 && (sec1 + sec2) < 60) {
			second = sec1 + sec2;
		}
		else if ((sec1 + sec2) >= 60) {
			n++;
			second = sec1 + sec2 - 60;
		}
		return second;
	}
};
int main() {
	Time t;

	int sec1, min1, h1;
	cout << "请输入当前时间："; cin >> h1 >> min1 >> sec1;
	cout << "" << "当前时间为：" << t.Sethour(h1) << "：" << t.Setmin(min1) << "：" << t.Setsec(sec1);
	int sec2, min2, h2;
	int sec3, min3, h3;
	h3 = t.Sethour(h1);
	min3 = t.Setmin(min1);
	sec3 = t.Setsec(sec1);
	cout << "\n请输入要添加的时间："; cin >> h2 >> min2 >> sec2;
	cout << "增加后的时间：" << t.Gethour(h3, h2) << "：" << t.Getmin(min3, min2) << "：" << t.Getsec(sec3, sec2);
	return 0;
}