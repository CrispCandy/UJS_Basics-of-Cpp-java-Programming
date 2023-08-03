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
	cout << "Length:" << r.GetLength();//获取长度

	cout << ",Width:" << r.GetWidth() << endl;//获取宽度

	cout << "Area:" << r.Area() << endl;//求面积

}

int main()

{

	Rectangle r;

	r.SetData(10, 10);//修改长和宽

	PrintRectangle(r);

	r.SetLength(20);//修改长度

	PrintRectangle(r);

	r.SetWidth(20);//修改宽度

	PrintRectangle(r);

	return 0;
}
