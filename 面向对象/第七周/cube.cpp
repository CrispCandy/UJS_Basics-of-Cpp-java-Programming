class  Rect
{
public:
    Rect(float  l, float  w);                        //定义矩形接受长和宽
    float  getArea();                                      //矩形面积
protected:
    float  mLength;                                            //定义长
    float  mWidth;                                              //定义宽

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
    float  mLength;                                            //定义长
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
    cout << "请输入矩形的长和宽：";
    cin >> j >> k;                                                                                        //键盘接收长和宽
    Rect  r1(j, k);
    cout << "矩形的面积为：" << r1.getArea() << endl;
    cout << "请输入立方体的高：";
    cin >> l;                                                                                                  //接受高
    cubiod  c1(j, k, l);
    cout << "立方体体积为：" << c1.getVol() << endl;
    cout << "立方体表面积为：" << c1.Area();
    return  0;

}
