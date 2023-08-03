#include  <string>
#include<iostream>
using  namespace  std;
class  Account
{
public:
    Account();
    Account(string a, string b, int m, int p, double q);
    double getInterst() {
        return mMoneyCapital * InterestRate[mDepositType - 1] * mLife;
    };

private:
    string  mID, mName;
    int  mMoneyCapital;//    本金
    int  mDepositType;    //存款类型
    float  mLife;      //简化处理输入以年为单位
    static  float  InterestRate[5];//利率
    float  mInerest;//利息
};
float Account::InterestRate[5] = { 0.0035,0.0325,0.0375,0.025,0.0475 };
Account::Account(string a, string b, int m, int p, double q) {
    mID = a;
    mName = b;
    mMoneyCapital = m;
    mDepositType = p;
    mLife = q;
}
Account::Account() {};
int  main()
{

    Account  a1("1001", "zhang3", 10000, 1, 0.8);
    Account  a2("1002", "li4", 2000, 2, 1);
    cout << a1.getInterst();
    cout << a2.getInterst();
}