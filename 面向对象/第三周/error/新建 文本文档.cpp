#include <bits/stdc++.h>
using namespace std;
class CString {
public:
	CString();
	CString(CString& m);
	CString(char* s);
	void Cat(char* a);
	void Cat(CString y);
	void Copy(CString& m);
	void Print();
	int Len();
	~CString() { p = NULL; delete[]p; }
private:
	char* p;
};
CString::CString() {
	p = NULL;
}
CString::CString(CString& m) {
	int i, j;
	for (i = 0; p[i] != '\0'; i++) {}
	p = new char[i + 1];
	for (j = 0; j < i; j++) {
		p[j] = m.p[j];
	}
	p[i] = '\0';
}
void CString::Cat(char* a) {
	int i, j, k;
	for (i = 0; p[i] != '\0'; i++) {}
	for (j = 0; a[j] != '\0'; j++) {}
	p = new char[j + 1];
	for (k = 0; k < j; k++) {
		p[k] = a[k];
	}
	p[j] = '\0';
}
void CString::Cat(CString y) {
	int i = 0, j, k = 0;
	while (p[i] != '\0')i++;
	char* s = new char[i + 1];
	for (j = 0; j < i; j++) {
		s[j] = p[j];
	}
	while (y.p[k] != '\0')k++;
	if (s[i - 1] == '\0') {
		p = new char[k + 1];
		for (int j = 0; j <= k - 1; k++)
			p[j] = y.p[j];
		p[k] = '\0';
	}
	else {

		p = new char[i + k + 1];
		for (int j = 0; j < i; j++) {
			p[j] = s[j];
		}
		for (int j = i; j < i + k; j++) {
			p[j] = y.p[j - i];
		}
		p[i + k] = '\0';
	}
	delete[]s;
}
CString::CString(char* s) {
	int i = 0;
	while (s[i] != '\0')i++;
	p = new char[i + 1];
	for (int j = 0; j < i; j++)
		p[j] = s[j];
	p[i] = '\0';
}
void CString::Copy(CString& m) {
	int i = 0;
	while (m.p[i] != '\0')i++;
	p = new char[i + 1];
	for (int j = 0; j < i; j++) {
		p[j] = m.p[j];
	}
	p[i] = '\0';
}
void CString::Print() {
	cout << p;

}
int CString::Len() {
	int i = 0;
	while (p[i] != '\0')i++;
	return i;

}
int main()

{

	CString str1;//生成str1对象

	char s[80];

	cin.getline(s, 80);

	str1.Cat(s);//字符串s连接到str1中字符串的末尾

	CString str2(str1);//生成str2对象

	str2.Print();//输出str2中保存的字符串	

	cin.getline(s, 80);

	CString str3(s), str4;

	str4.Copy(str3);//将str3中保存的字符串拷贝到str4中

	str4.Cat(str1);

	cout << str4.Len() << endl;//输出str4中字符串长度

	str4.Print();//输出字符串

	return 0;

}