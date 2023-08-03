#include <bits/stdc++.h> 

using namespace std;

int main(void) {

	int n, m;

	cin >> n;
	int h = n;
	
	int* arr = new int[n];
	int* brr = new int[n];
	int* crr = new int[n];

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		brr[i] = arr[i];
    }

	for (int i = 0; i < n; i++) {

		for (int j = 1; j < n; j++) {

			if (brr[j] < brr[j - 1]) {

				m = brr[j];

				brr[j] = brr[j - 1];

				brr[j - 1] = m;

			}

		}

	}
	for (int i = 0; i < h - 1; i++) {
		for (int j = i + 1; j < h; j++) {
			if (brr[j] == brr[i])
			{
				for (int k = j; k < h - 1; k++)
					brr[k] = brr[k + 1];
				h--; j--;
			}
		}
	}

	for (int i = 1; i <= n; i++) crr[i - 1] = i;

	for (int i = 0; i < n; i++) {

		for (int j = 0; j < n; j++) {

			m = j;

			if (arr[i] == brr[j]) break;

		}

		crr[i] = m+1 ;

	}
	for (int i = 0; i < n; i++) cout << crr[i] << " ";

}

