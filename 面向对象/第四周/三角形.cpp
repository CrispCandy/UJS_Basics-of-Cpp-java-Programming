    //���ݵ�Ķ��壬д���߶κ������εĶ��壬��ͨ�������������֤
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
    cout << "�������1��x��ֵ��";
    cin >> x1;
    cout << "�������1��y��ֵ��";
    cin >> y1;
    cout << "�������2��x��ֵ��";
    cin >> x2;
    cout << "�������2��y��ֵ��";
    cin >> y2;
    cout << "�������3��x��ֵ��";
    cin >> x3;
    cout << "�������3��y��ֵ��";
    cin >> y3;
    cout << "��1������Ϊ��(" << x1 << "," << y1 << ")" << endl;
    cout << "��2������Ϊ��(" << x2 << "," << y2 << ")" << endl;
    cout << "��3������Ϊ��(" << x3 << "," << y3 << ")" << endl;
    myPoint  p1(x1, y1), p2(x2, y2), p3(x3, y3);
    Line    line1(p1, p2);
    cout << "�߳���:" << line1.GetDistance() << endl;
    Triangle  t(p1, p2, p3);
    cout << "�������ε��ܳ�Ϊ��" << t.getGirth() << endl;
    cout << "�������ε����Ϊ��" << t.getArea() << endl;
    return  0;
}