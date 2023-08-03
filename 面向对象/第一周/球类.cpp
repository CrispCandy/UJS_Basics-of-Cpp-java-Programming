#include<bits/stdc++.h>
using namespace std;
#define Pi 3.141592
class Sphere {
	double Radiu;
public:
	void SetRadiu(double r);
	void SetRadiu();
	double GetRadius();
	double GetArea();
	double GetVolume();
};
void Sphere::SetRadiu(double r) {
	Radiu = r;
}
void Sphere::SetRadiu() {
	Radiu = 1;
}
double Sphere::GetArea() {
	return 4 * Pi * Radiu * Radiu;
}
double Sphere::GetVolume()
{
	return (4 / 3.0) * Pi* Radiu * Radiu * Radiu;
}
double Sphere::GetRadius() {
	return Radiu;
}
int main()

{

	Sphere s;

	cout << fixed << setprecision(2);

	s.SetRadiu();//缺省设置球半径为1

	cout << "Radius:" << s.GetRadius()//获取半径

		<< ",Superficial area:" << s.GetArea()//求表面积

		<< ",Volume:" << s.GetVolume() << endl;//求体积

	double r;

	cin >> r;

	s.SetRadiu(r);

	cout << "Radius:" << s.GetRadius() << ",Superficial area:" << s.GetArea()

		<< ",Volume:" << s.GetVolume() << endl;

}