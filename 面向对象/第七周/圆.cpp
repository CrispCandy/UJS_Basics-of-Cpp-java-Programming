#include<bits/stdc++.h>
using namespace std;

class Point {
public:
    Point() { mx = 1; my = 1; }
    Point(double x, double y) {
        mx = x;
        my = y;
    }
    void SetPoint(double x, double y) {
        mx = x;
        my = y;
    }
    void Show() {
        cout << mx << "," << my << endl;
    }
    double GetX() { return mx; }
    double GetY() { return my; }
protected:
    double mx;
    double my;
};
const double PI = 3.1415926;
class Circle :public Point {
public:
    Circle() { mr = 1; }
    Circle(double x,double y,double r):Point(x,y),mr(r){}
    void Show() {
        cout << Point::GetX() << "," << Point::GetY() << endl;
        cout << mr << endl;
    }
    double Girth() { return 2 * PI * mr; }
    double Area() { return PI * mr * mr; }
    double GetR() { return mr; }
protected:
    double mr;
};
class Cylinder :public Circle{
public:
    Cylinder() { mh = 1; }
    void SetCylinder(Circle& R, double h) {
        mx = R.GetX();
        my = R.GetY();
        mr = R.GetR();
        mh = h;
    }
    double Area() {return 2 * PI * mr * mr + mh * 2 * PI * mr;}
    double Volumn() { return PI * mr * mr * mh; }
    void Show() {
        cout << mx << "," << my << endl;
        cout << mr << endl;
        cout << mh << endl;
    }
protected:
    double mh = 1;
};
int  main()
{
    double  x, y;
    cin >> x >> y;//若输入：10  20
    Point  p1(x, y);
    p1.SetPoint(x + 10, y + 5);
    cout << fixed << setprecision(1);
    p1.Show();//单独占一行输出：10,20
    Circle  c1(p1.GetX(), p1.GetY(), 20);
    c1.Show();//输出两行：圆心一行，半径一行
    cout << "c1的周长是：" << c1.Girth() << endl;//一个数据一行
    cout << "c1的面积是：" << c1.Area() << endl;//一个数据一行
    Cylinder  cy1;
    cy1.SetCylinder(c1, 10.5);
    cy1.Show();//输出三行：圆心一行，半径一行，高一行
    cout << "cy1的表面积是：" << cy1.Area() << endl;//一个数据一行
    cout << "cy1的体积是：" << cy1.Volumn() << endl;//一个数据一行
    return  0;
}