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

	s.SetRadiu();//ȱʡ������뾶Ϊ1

	cout << "Radius:" << s.GetRadius()//��ȡ�뾶

		<< ",Superficial area:" << s.GetArea()//������

		<< ",Volume:" << s.GetVolume() << endl;//�����

	double r;

	cin >> r;

	s.SetRadiu(r);

	cout << "Radius:" << s.GetRadius() << ",Superficial area:" << s.GetArea()

		<< ",Volume:" << s.GetVolume() << endl;

}