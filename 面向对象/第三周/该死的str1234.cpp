#include<iostream>
#include<cmath>
using namespace std;
class CString {
public:
	CString() { p =NULL; }
	CString(CString&r)
	{
		int i = 0;
		while (r.p[i] != '\0')i++;
		p = new char[i+1];
		for (int j = 0; j <= i - 1; j++)
			p[j] = r.p[j];
		p[i] = '\0';
	}
	CString(char* r);
	void Cat(char* q);
	void Cat(CString q);
	void Copy(CString& r);
	void Print() { cout << p << endl; }
	int Len()
	{
		int i = 0;
		while (p[i] != '\0')i++;
		return i;
	}
	~CString() { delete[]p; }
private:
	char* p;
};
void CString::Cat(char* q)
{
	int i = 0;
	while (q[i] != '\0')i++;
	p = new char[i + 1];
	for (int j = 0; j <= i - 1; j++)
		p[j] = q[j];
	p[i] = '\0';
}
void CString::Cat(CString q)
{
	int i = 0, k = 0;
	while (p[i] != '\0')i++;
	char* c = new char[i + 1];
	for (int j = 0; j <= i - 1; j++)
		c[j] = p[j];
	while (q.p[k] != '\0')k++;
	if (c[i - 1] == '\0')
	{
		p = new char[k + 1];
		for (int j = 0; j <= k - 1; k++)
			p[j] = q.p[j];
		p[k] = '\0';
	}
	else
	{
		
		p = new char[i + k + 1];
		for (int j = 0; j <= i - 1; j++)
			p[j] = c[j];
		for (int j = i; j <= i + k - 1; j++)
			p[j] = q.p[j-i];
		p[i + k] = '\0';
	}
	delete[]c;
}//���غ���
CString::CString (char* r)
{
	int i = 0;
	while (r[i] != '\0')i++;
	p = new char[i + 1];
	for (int j = 0; j <= i - 1; j++)
		p[j] = r[j];
	p[i] = '\0';
}//���غ���
void CString::Copy(CString& r)
{
	int i = 0;
	while (r.p[i] != '\0')i++;
	p = new char[i + 1];
	for (int j = 0; j <= i - 1; j++)
		p[j] = r.p[j];
	p[i] = '\0';
}
int main()
{
	CString str1;//����str1����

	char s[80];

	cin.getline(s, 80);

	str1.Cat(s);//�ַ���s���ӵ�str1���ַ�����ĩβ

	CString str2(str1);//����str2����

	str2.Print();//���str2�б�����ַ���	

	cin.getline(s, 80);

	CString str3(s), str4;

	str4.Copy(str3);//��str3�б�����ַ���������str4��

	str4.Cat(str1);

	cout << str4.Len() << endl;//���str4���ַ�������

	str4.Print();//����ַ���

	return 0;

}


