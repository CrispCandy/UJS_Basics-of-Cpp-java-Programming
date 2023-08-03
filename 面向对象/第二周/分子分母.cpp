#include<bits/stdc++.h>
using namespace std;
class  CRational {
    int fz, fm;
public:
        CRational(int a, int b);
        CRational add(CRational x);
        void show();
        CRational multi(CRational y);
};
CRational::CRational(int a=0, int b=1) {
   
    
    int z = 1, p = a, q = b;
    while (a % b != 0)
    {
        z = a % b;
        a = b;
        b = z;
    }
    fz = p / z;
    fm = q / z;
}
CRational CRational::add(CRational x) {
    int a, b;
    a = x.fz * fm + x.fm * fz;
    b = x.fm * fm;
    CRational Result(a, b);
    return Result;
}
CRational CRational::multi(CRational x) {
    int a, b;
    a = x.fz * fz;
    b = x.fm * fm;
    CRational Result(a, b);
    return Result;
}
void CRational::show(){
    if (fz < 0 && fm < 0) {
        fz = fabs(fz);
        fm = fabs(fm);
    }
    if ((fz < 0 && fm>0) || (fz > 0 && fm < 0)) {
        cout << "-";
        fz = fabs(fz);
        fm = fabs(fm);
    }
    cout << fz << "/" << fm << endl;;
}
int main()

{

    int a, b, c, d;//��������CRational����ķ��Ӻͷ�ĸ

    cin >> a >> b >> c >> d;

    CRational f1(a, b);//f1����ķ���Ϊa����ĸΪb

    CRational f2(c, d);

    CRational f3 = f1.add(f2);//f1+f2�Ľ�����浽f3��

    f3.show();//��ʾ��ʽ������/��ĸ

    f3 = f1.multi(f2);//f1*f2�Ľ�����浽f3��

    f3.show();

    return 0;

}