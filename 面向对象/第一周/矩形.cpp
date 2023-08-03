#include<bits/stdc++.h>
using namespace std;
class Rectangle {

	double Length;
	double Width;
	double r;
public:
	double GetLength();
	double GetWidth();
	double Area();
	void SetData(double a, double b);
	void SetLength(double a);
	void SetWidth(double b);
	Rectangle(double r0 = 0);
};
Rectangle::Rectangle(double r0) {
	r = r0;
}
double Rectangle::GetLength() {
	return Length;
}
double Rectangle::GetWidth() {
	return Width;
}
void Rectangle::SetData(double a, double b) {
	Length = a;
	Width = b;
}
void Rectangle::SetLength(double a) {
	Length = a;
}
void Rectangle::SetWidth(double b) {
	Width = b;
}
double Rectangle::Area() {
	return Length * Width;
}
void PrintRectangle(Rectangle& r){
	cout << "Length:" << r.GetLength();//��ȡ����

	cout << ",Width:" << r.GetWidth() << endl;//��ȡ���

	cout << "Area:" << r.Area() << endl;//�����

}

int main()

{

	Rectangle r;

	r.SetData(10, 10);//�޸ĳ��Ϳ�

	PrintRectangle(r);

	r.SetLength(20);//�޸ĳ���

	PrintRectangle(r);

	r.SetWidth(20);//�޸Ŀ��

	PrintRectangle(r);

	return 0;
}
