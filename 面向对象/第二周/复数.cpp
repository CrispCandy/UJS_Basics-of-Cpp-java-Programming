#include<bits/stdc++.h>
using namespace std;
class FS {
    double sb, xb;
public:
    FS(double a, double b);
    FS add(FS p);
    void show();
};
FS::FS(double a, double b) {
    sb = a; xb = b;
   
}
FS FS::add(FS p) {
    double a, b;
    a = sb + p.sb;
    b = xb + p.xb;
    FS Result(a, b);
    return Result;
}
void FS::show() {
    if (sb != 0) {
        if (xb > 0) {
            cout << sb << "+" << xb << "i";
        }
        else if (xb == 0) {
            cout << sb;
        }
        else if (xb < 0) {
            cout << sb <<  xb << "i";
        }
    }
    else {
        if (xb == 0) {
            cout << "0";
        }
        else
            cout << xb << "i";
    }
}
int main() {
    double a, b, c, d;
    cin >> a >> b >> c >> d;
    FS f1(a, b);
    cout << "c1:";
    f1.show();

    FS f2(c, d);
    cout << "\nc2:"; f2.show();
    FS f3 = f1.add(f2);
    cout << "\nc3:"; f3.show();
    return 0;
}