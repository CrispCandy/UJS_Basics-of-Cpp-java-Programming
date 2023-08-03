#include  <iostream>
using  namespace  std;
class  Clock        //时钟类声明
{
public:        //外部接口
    Clock(int  NewH = 0, int  NewM = 0, int  NewS = 0);
    void  ShowTime();
    Clock  operator  ++();                //前置单目运算符重载
    //后置单目运算符重载
    Clock operator++(int);
    Clock operator+(Clock c);
    //+运算符重载


private:        //私有数据成员
    int  Hour, Minute, Second;
};
Clock::Clock(int NewH , int  NewM , int  NewS ) {
    Hour = NewH;
    Minute = NewM;
    Second = NewS;
    int i=0, j=0;
    if (Second >= 60) {
        i = Second / 60;
        Second = Second % 60;
        Minute = Minute + i;
    }
    if (Minute>= 60) {
        j = Minute / 60;
        Minute = Minute % 60;
        Hour = Hour + j;
    }
    if (Hour >= 24) {
        Hour -= 24;
    }
}
Clock Clock::operator++() {
    ++Second;
    return *this;
}
Clock Clock::operator++(int) {
    Second++;
    int i = 0, j = 0;
    if (Second >= 60) {
        i = Second / 60;
        Second = Second % 60;
        Minute = Minute + i;
    }
    if (Minute >= 60) {
        j = Minute / 60;
        Minute = Minute % 60;
        Hour = Hour + j;
    }
    if (Hour >= 24) {
        Hour -= 24;
    }
    return *this;
}
Clock Clock::operator+(Clock c) {
    return Clock(Hour + c.Hour, Minute + c.Minute, Second + c.Second);
}
void  Clock::ShowTime()
{
    cout << Hour << ":" << Minute << ":" << Second << endl;
}

int  main()
{
    Clock  c1(23, 59, 59), c2(5, 12, 10), c3;
    c1.ShowTime();
    c1++;
    c1.ShowTime();
    c3 = ++c2;
    c3.ShowTime();
    c3 = c2 + c1;
    c3.ShowTime();
    return  0;
}


