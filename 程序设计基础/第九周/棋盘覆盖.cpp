#include<bits/stdc++.h>
using namespace std;
int haoma = 1;//L型骨架编号
int board[128][128];//行列数的最大值
void xuy(int tr, int tc, int dr, int dc, int size) {
	// tr:棋盘左上角方格行号
	// tc:棋盘左上角方格列号
	// dr:特殊方格行号
	// dc:特殊方格列号
	// size:当前棋盘大小
	if (size == 1)return;
	int t = haoma++;//L型骨架编号每次加一
	int s = size / 2;//棋盘边长的一半
	if (dr < tr + s && dc < tc + s)//左上的棋盘（有特殊方格）
		xuy(tr, tc, dr, dc, s);
	else {//无特殊方格
		board[tr + s - 1][tc + s - 1] = t;//特殊方格位置
		xuy(tr, tc, tr + s - 1, tc + s - 1, s);
	}

	if (dr < tr + s && dc >= tc + s)//左下的棋盘
		xuy(tr, tc + s, dr, dc, s);
	else {
		board[tr + s - 1][tc + s] = t;
		xuy(tr, tc + s, tr + s - 1, tc + s, s);
	}
	if (dr >= tr + s && dc < tc + s)//右上的棋盘
		xuy(tr + s, tc, dr, dc, s);
	else {
		board[tr + s][tc + s - 1] = t;
		xuy(tr + s, tc, tr + s, tc + s - 1, s);
	}
	if (dr >= tr + s && dc >= tc + s)//右下的棋盘
		xuy(tr + s, tc + s, dr, dc, s);
	else {
		board[tr + s][tc + s] = t;
		xuy(tr + s, tc + s, tr + s, tc + s, s);
	}
}
int main() {
	int size, dr, dc;//大小（2^k次方）、行、列
	cout << "Input the size and the x,y:";
	cin >> size >> dr >> dc;
	dr--; dc--;//从行列号0，0开始算，所以输入也要从0开始，所以减1
	xuy(0, 0, dr, dc, size);
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {//打印二维数组
			cout.width(4);cout << left << board[i][j];
		}
	cout.width(-4); cout << endl;
	}
	return 0;
}