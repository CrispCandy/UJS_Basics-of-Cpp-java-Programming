#include<bits/stdc++.h>
using namespace std;
int haoma = 1;//L�͹Ǽܱ��
int board[128][128];//�����������ֵ
void xuy(int tr, int tc, int dr, int dc, int size) {
	// tr:�������ϽǷ����к�
	// tc:�������ϽǷ����к�
	// dr:���ⷽ���к�
	// dc:���ⷽ���к�
	// size:��ǰ���̴�С
	if (size == 1)return;
	int t = haoma++;//L�͹Ǽܱ��ÿ�μ�һ
	int s = size / 2;//���̱߳���һ��
	if (dr < tr + s && dc < tc + s)//���ϵ����̣������ⷽ��
		xuy(tr, tc, dr, dc, s);
	else {//�����ⷽ��
		board[tr + s - 1][tc + s - 1] = t;//���ⷽ��λ��
		xuy(tr, tc, tr + s - 1, tc + s - 1, s);
	}

	if (dr < tr + s && dc >= tc + s)//���µ�����
		xuy(tr, tc + s, dr, dc, s);
	else {
		board[tr + s - 1][tc + s] = t;
		xuy(tr, tc + s, tr + s - 1, tc + s, s);
	}
	if (dr >= tr + s && dc < tc + s)//���ϵ�����
		xuy(tr + s, tc, dr, dc, s);
	else {
		board[tr + s][tc + s - 1] = t;
		xuy(tr + s, tc, tr + s, tc + s - 1, s);
	}
	if (dr >= tr + s && dc >= tc + s)//���µ�����
		xuy(tr + s, tc + s, dr, dc, s);
	else {
		board[tr + s][tc + s] = t;
		xuy(tr + s, tc + s, tr + s, tc + s, s);
	}
}
int main() {
	int size, dr, dc;//��С��2^k�η������С���
	cout << "Input the size and the x,y:";
	cin >> size >> dr >> dc;
	dr--; dc--;//�����к�0��0��ʼ�㣬��������ҲҪ��0��ʼ�����Լ�1
	xuy(0, 0, dr, dc, size);
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {//��ӡ��ά����
			cout.width(4);cout << left << board[i][j];
		}
	cout.width(-4); cout << endl;
	}
	return 0;
}