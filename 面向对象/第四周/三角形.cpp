    //根据点的定义，写出线段和三角形的定义，并通过主程序进行验证
//mypoint.h
#include<bits/stdc++.h>
using namespace std;

class  myPoint
{
public:
    myPoint();
    myPoint(double  x, double  y);
    double  getX();
    double  getY();
private:
    double  mX, mY;
};

myPoint::myPoint(double  x, double  y) {
    mX = x;
    mY = y;
}
double myPoint::getX() {
    return mX;
}
double myPoint::getY() {
    return mY;
}
class Line {
private:
        myPoint a, b;
public:
    Line(myPoint a, myPoint b) :a(a), b(b){};
    double GetDistance() {
        double x= double(a.getX() - b.getX());
        double y = double(a.getY() - b.getY());
        return hypot(x, y);
    }
};
class Triangle {
private:
    
    double girth;
    double area;
public:
    Triangle(myPoint i, myPoint j, myPoint k) {
        Line m(i, j), n(j, k), l(i, k);
        girth = m.GetDistance() + n.GetDistance() + l.GetDistance();
        double t = girth / 2;
        area = sqrt(t * (t - m.GetDistance()) * (t - n.GetDistance()) * (t - l.GetDistance()));
    }
    double getGirth() {
        return girth;
    }
    double getArea() {
        return area;
    }
};
int  main()
{
    double  x1, x2, x3, y1, y2, y3;
    cout << "请输入点1的x的值：";
    cin >> x1;
    cout << "请输入点1的y的值：";
    cin >> y1;
    cout << "请输入点2的x的值：";
    cin >> x2;
    cout << "请输入点2的y的值：";
    cin >> y2;
    cout << "请输入点3的x的值：";
    cin >> x3;
    cout << "请输入点3的y的值：";
    cin >> y3;
    cout << "点1的坐标为：(" << x1 << "," << y1 << ")" << endl;
    cout << "点2的坐标为：(" << x2 << "," << y2 << ")" << endl;
    cout << "点3的坐标为：(" << x3 << "," << y3 << ")" << endl;
    myPoint  p1(x1, y1), p2(x2, y2), p3(x3, y3);
    Line    line1(p1, p2);
    cout << "线长度:" << line1.GetDistance() << endl;
    Triangle  t(p1, p2, p3);
    cout << "该三角形的周长为：" << t.getGirth() << endl;
    cout << "该三角形的面积为：" << t.getArea() << endl;
    return  0;
}