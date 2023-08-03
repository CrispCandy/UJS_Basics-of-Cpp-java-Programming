#include<bits/stdc++.h>
using namespace std;
int main() {
	cout << "请输入十个数据：数组原始数据为：";
	const int N = 10;

	int a[N];
	int i, j, k = 0, x = 0;
	int g = 0; int l = 0; int f = 0;
	for (i = 0; i < N; i++) {
		cin >> a[i];
		cout << a[i]<<setw(4);
	}
	for (i = 0; i < N; i++) {
		if (a[i] % 2 == 1)
			g++;
	}
	int* b = new int[g];
	int* c = new int[N - g];
	for (i = 0; i < N; i++) {
		if (a[i] % 2 == 1)
			b[l++] = a[i];
		if (a[i] % 2 == 0)
			c[f++] = a[i];
	}
	for (i = 1; i <= l - 1; i++) {
		for (j = 0; j <= l - i - 1; j++) {
			if (b[j] > b[j + 1]) {
				k = b[j];
				b[j] = b[j + 1];
				b[j + 1] = k;
			}
		}
	}
	for (i = 1; i <= f - 1; i++) {
		for (j = 0; j <= f - i - 1; j++) {
			if (c[j] < c[j + 1]) {
				x = c[j];
				c[j] = c[j + 1];
				c[j + 1] = x;
			}
		}
	}
	cout << "\n输出结果：";
	for (i = 0; i < f; i++)
		cout << c[i] << setw(4);
	for (i = 0; i < l; i++)
		cout << b[i] << setw(4);
	system("pause");
	return 0;
}