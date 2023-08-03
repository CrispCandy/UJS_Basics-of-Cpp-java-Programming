#include <iostream>
#include<iostream>
#include<cmath>
using namespace std;
class Fraction {
private:
    int FM, FZ;
public:
    Fraction();
    Fraction(int fm, int fz);
    void input();
    void print();
    Fraction operator+(Fraction f);
    Fraction operator-(Fraction f);
    Fraction operator*(Fraction f);
    Fraction operator/(Fraction f);
    Fraction operator --();
    Fraction operator --(int);
};
Fraction::Fraction(){}
Fraction::Fraction(int fz, int fm) {
    if (fm < 0&&fz>0) {
        fm = -fm;
        int m = max(fm, fz);
        int n = min(fm, fz);
        int t=1;
        for (int i = 2; i <= n; i++) {
            if (m % i == 0 && n % i == 0) {
                t = i;
            }
        }
        fm /=t;
        fz /=-t;
    }
    else if (fm>0&&fz < 0) {
        fz = -fz;
        int m = max(fm, fz);
        int n = min(fm, fz);
        int t=1;
        for (int i = 2; i <= n; i++) {
            if (m % i == 0 && n % i == 0) {
                t = i;
            }
        }
        fm /=t;
        fz /=-t;
    }
    else if (fm < 0 && fz < 0) {
        fm = -fm;
        fz = -fz;
        int m = max(fm, fz);
        int n = min(fm, fz);
        int t=1;
        for (int i = 2; i <= n; i++) {
            if (m % i == 0 && n % i == 0) {
                t = i;
            }
        }
        fm /=-t;
        fz /=-t;
    }
    else {
        int m = max(fm, fz);
        int n = min(fm, fz);
        int t=1;
        for (int i = 2; i <= n; i++) {
            if (m % i == 0 && n % i == 0) {
                t = i;
            }
        }
        fm /= t;
        fz /= t;
    }
    FM = fm;
    FZ =fz;
}
void::Fraction::input() {
    int fz = 0, fm = 0;
    char c ;
    cin >> fz >> c >> fm;
   if (fm < 0 && fz>0) {
        fm = -fm;
        int m = max(fm, fz);
        int n = min(fm, fz);
        int t = 1;
        for (int i = 2; i <= n; i++) {
            if (m % i == 0 && n % i == 0) {
                t = i;
            }
        }
        fm /= t;
        fz /= -t;
    }
    else if (fm > 0 && fz < 0) {
        fz = -fz;
        int m = max(fm, fz);
        int n = min(fm, fz);
        int t = 1;
        for (int i = 2; i <= n; i++) {
            if (m % i == 0 && n % i == 0) {
                t = i;
            }
        }
        fm /= t;
        fz /= -t;
    }
    else if (fm < 0 && fz < 0) {
        fm = -fm;
        fz = -fz;
        int m = max(fm, fz);
        int n = min(fm, fz);
        int t = 1;
        for (int i = 2; i <= n; i++) {
            if (m % i == 0 && n % i == 0) {
                t = i;
            }
        }
        fm /= -t;
        fz /= -t;
    }
    else {
        int m = max(fm, fz);
        int n = min(fm, fz);
        int t = 1;
        for (int i = 2; i <= n; i++) {
            if (m % i == 0 && n % i == 0) {
                t = i;
            }
        }
        fm /= t;
        fz /= t;
    }
    FM = fm;
    FZ = fz;
}
Fraction Fraction::operator+(Fraction f) {
    int Fm, Fz;    
    Fz = FZ*f.FM + f.FZ*FM;
    Fm = FM * f.FM;
    return Fraction(Fz, Fm);
}
Fraction Fraction::operator-(Fraction f) {
    int Fm, Fz;
    Fz = FZ*f.FM -f.FZ*FM;
    Fm = FM * f.FM;
    return Fraction(Fz, Fm);
}
Fraction Fraction::operator*(Fraction f) {
    int Fm, Fz;    
    Fz = FZ * f.FZ;
    Fm = FM * f.FM;
    return Fraction(Fz, Fm);
}
Fraction Fraction::operator/(Fraction f) {
    int Fm, Fz;
    Fm = FM * f.FZ;
    Fz = FZ*f.FM;
    return Fraction(Fz, Fm);
}
Fraction Fraction::operator --() {
    Fraction temp=*this;
    temp.FZ = --this->FZ;
    return temp;
}
Fraction Fraction::operator --(int) {
    Fraction temp=*this;
    temp.FZ = this->FZ--;
    return temp;
}
void::Fraction::print() {
    if (FZ % FM == 0) {
       if(FZ/FM==0)  cout << FZ / FM << endl;
        else cout << FZ / FM << "/" << "1" << endl;
    }
    else if(FZ%FM!=0){
        if (FZ < 0 && FM < 0) {
            cout << -FZ << "/" << -FM << endl;
        }
        else if (FZ < 0 && FM>0) {
            cout << "-" << -FZ << "/" << FM << endl;
        }
        else if (FZ > 0 && FM < 0) {
            cout << "-" << FZ << "/" << -FM << endl;
        }
        else {
            cout << FZ << "/" << FM << endl;
        }
    }
}
int main()
{
	Fraction f1, f2,f3(4,-8),f4;
	 f1.input();  //让用户输入分数，格式：分子/分母，如 2/6 
         f2.input();  
         f4=f1+f3;
        f4.print();		
	f4=----f3; //--运算只对分数对象的分子进行
	 f4.print();		
	f3 = f1 / f2;
	f3.print();
	f3=f2--;
	f3.print();
	(f1 * f2).print();
	(f1 - f2).print();  
	return 0;
}


