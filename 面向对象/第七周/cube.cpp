class  Rect
{
public:
    Rect(float  l, float  w);                        //������ν��ܳ��Ϳ�
    float  getArea();                                      //�������
protected:
    float  mLength;                                            //���峤
    float  mWidth;                                              //�����

};
Rect::Rect(float l, float w) {
    mLength = l;
    mWidth = w;
}
float Rect::getArea() {
    float a;
    a= mLength* mWidth;
    return a;
}
class cubiod//: public Rect
{
public:
    cubiod(float a, float b, float c)
    {
        mLength = a;
        mWidth = b;
        mHeight = c;
    };
    float getVol();
    float Area();
private:
    float  mLength;                                            //���峤
    float  mWidth;
    float mHeight;
};
//cubiod::cubiod(float a,float b,float c)

float cubiod::getVol()
{
    return mLength * mWidth * mHeight;
}
float cubiod::Area()
{
    return  2 * (mLength * mWidth + mLength * mHeight + mWidth * mHeight);
}
#include<iostream>
using  namespace  std;
int  main()
{
    float  j, k, l;
    cout << "��������εĳ��Ϳ�";
    cin >> j >> k;                                                                                        //���̽��ճ��Ϳ�
    Rect  r1(j, k);
    cout << "���ε����Ϊ��" << r1.getArea() << endl;
    cout << "������������ĸߣ�";
    cin >> l;                                                                                                  //���ܸ�
    cubiod  c1(j, k, l);
    cout << "���������Ϊ��" << c1.getVol() << endl;
    cout << "����������Ϊ��" << c1.Area();
    return  0;

}
