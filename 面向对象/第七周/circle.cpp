//Circle.h
#include<iostream>
using  namespace  std;
class  Circle
{
public:
    Circle(void);
    Circle(float  r);            //����һ��Բ
    float  getArea();            //Բ�����
    float  getGirth();          //Բ���ܳ�
    static  const    float  PI;
protected:
    float  mR;                          //Բ�İ뾶
};

Circle::Circle(void) {
    mR = 0;
}
Circle::Circle(float r) {
    mR = r;
}
float Circle::getArea() {
    return 3.14 *mR * mR;
}
float Circle::getGirth() {
    return 2 * 3.14 * mR;
}
class Cylinder :public Circle {
public:
    Cylinder(float r,float h):Circle(r),mH(h){}
    float getArea() {
        return (getGirth() * mH + 2 * 3.14 * mR * mR);
    }
    float getVol() {
        return 3.14*mR*mR*mH;
    }
private:
    float mH;
};
//main.cpp
//#include"Cylinder.h"
//#include"Circle.h"
#include<iostream>
using  namespace  std;
int  main()
{
    float  t, m;
    cout << "������Բ�İ뾶��";
    cin >> t;                                                                              //���̽���Բ�İ뾶
    Circle  c1(t);
    cout << "Բ�����Ϊ��" << c1.getArea() << endl;
    cout << "������Բ���ĸߣ�";
    cin >> m;                                                                              //���̽���Բ���ĸ�
    Cylinder  c2(t, m);
    cout << "Բ���ı����Ϊ��" << c2.getArea() << endl;
    cout << "Բ�������Ϊ��" << c2.getVol() << endl;
}
