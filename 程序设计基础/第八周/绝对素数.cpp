#include<iostream>
#include<iomanip>
#include<cmath>
#include<vector>
using namespace std;
bool xuy(int n);//�ж�n�Ƿ�Ϊ����
int txs(int n);//��ȡn�ĵߵ���

int main()
{
    int n,m, ren,l=0;
    cin >> n >> m;
    for (n ; n <= m; n++)
    {
        ren = txs(n);
        if (xuy(n) && xuy(ren))
        {
            if (l++ % 10 == 0)
                cout << endl;
            cout << n << " ";
        }
    }
    getchar();
    return 0;
}
int txs(int n)//��ȡn�ĵߵ���
{
    int rn = 0;
    while (n)
    {
        rn = 10 * rn + n % 10;
        n /= 10;
    }
    return rn;
}
bool xuy(int n)//�ж�n�Ƿ�Ϊ����
{
    int i;
    if (n <= 1)
        return false;
    else if (n == 2)
        return true;
    for (i = 2; i < n; i++)
        if (n % i == 0)
            return false;

    return true;

}
