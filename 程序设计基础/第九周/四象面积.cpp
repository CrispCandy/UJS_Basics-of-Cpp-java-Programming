#include<bits/stdc++.h>
using namespace std;
double area(double radius)
{
	const double PI = 3.1415926;
	return PI * radius * radius;
}
double area(double a, double b, double c)
{
    double l, s;
    l = (a + b + c) / 2;
    s = sqrt(l * (l - a) * (l - b) * (l - c));
    return s;
}
double area(double length, double width)
{
    return length * width;
}
double area(double a, double b, double h, int)
{
    return (a + b) * h / 2;
}
int main() {
    cout << "圆的半径：";
        double a,a1=0;
        cin >> a;
        a1=area(a);
        cout << a1<<"\n";
        cout << "三角形三边长：";
        double x, y, z, x1 = 0;
        cin >> x >> y >> z;
        x1 = area(x, y, z);
        cout << x1 << "\n";
        cout << "长方形长与宽：";
        double b, c, b1 = 0;
        cin >> b >> c;
        b1 = area(b, c);
        cout << b1 << "\n";
        cout << "梯形：";
        double m, n, o, p, m1 = 0;
        cin >> m >> n >> o >> p;
        m1 = area(m, n, o, p);
        cout << m1 << "\n";
        return 0;
}
