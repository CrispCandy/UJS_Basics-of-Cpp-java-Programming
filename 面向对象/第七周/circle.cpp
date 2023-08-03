//Circle.h
#include<iostream>
using  namespace  std;
class  Circle
{
public:
    Circle(void);
    Circle(float  r);            //定义一个圆
    float  getArea();            //圆的面积
    float  getGirth();          //圆的周长
    static  const    float  PI;
protected:
    float  mR;                          //圆的半径
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
    cout << "请输入圆的半径：";
    cin >> t;                                                                              //键盘接收圆的半径
    Circle  c1(t);
    cout << "圆的面积为：" << c1.getArea() << endl;
    cout << "请输入圆柱的高：";
    cin >> m;                                                                              //键盘接收圆柱的高
    Cylinder  c2(t, m);
    cout << "圆柱的表面积为：" << c2.getArea() << endl;
    cout << "圆柱的体积为：" << c2.getVol() << endl;
}
