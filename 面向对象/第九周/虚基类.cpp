#include  <iostream>  
using  namespace  std;
#include<cstring>
class  CStaff
{
protected:
    int  number;
    char  name[10];
    int  age;
public:
    CStaff(int  num, const  char* na, int  a)
    {
        number = num;
        age = a;
        strcpy(name, na);
    }
    void  Display()
    {
        cout << name << "  is  a  Staff  " << age << "  yeas  old" << endl;
    }
};
class CTeacher:virtual public CStaff
{
protected:
    char  zch[20];          //Ö°³Æ
public:
    CTeacher(int  num, const  char* na, int  a, const  char* zc);
    void  Display()
    {
        cout << name << "  is  a  Teacher  " << age << "  yeas  old,  " << zch << endl;
    }
};
CTeacher::CTeacher(int num, const  char* na, int  a, const  char* zc):CStaff(num, na, a) {
    strcpy(zch, zc);
}
class CManagement:virtual public CStaff
{
protected:
    char  zw[50];                          //Ö°Îñ
public:
    CManagement(int  num, const    char* na, int  a, const  char* z);
    void  Display()
    {
        cout << name << "  is  a  management  " << age << "  yeas  old,  " << zw << endl;
    }
};
CManagement::CManagement(int  num, const    char* na, int  a, const  char* z) :CStaff(num, na, a) {
    strcpy(zw, z);
}
class CTeacherManagement:virtual public CStaff,CTeacher,CManagement
{
public:
    CTeacherManagement(int  num, const  char* na, int  a, const  char* zc, const  char* z);
    void  Display()
    {
        cout << name << "  is  a  Teacher  management  " << age << "  yeas  old,  "
            << zch << ",  " << zw << endl;
    }
};
CTeacherManagement::CTeacherManagement(int  num, const  char* na, int  a, const  char* zc, const  char* z) :CStaff(num, na, a), CTeacher(num, na, a, zc), CManagement(num, na, a, z) {
    number = num;
    age = a;
    strcpy(name, na);
    strcpy(zch, zc);
    strcpy(zw, z);
}

int  main()
{
    CStaff      s1(101, "Zhao", 20);
    CTeacher  t1(102, "Zhang", 30, "Lecture");
    CManagement  m1(103, "Wang", 50, "dean");
    CTeacherManagement  tm1(104, "Li", 40, "Peofessor", "department  head");
    s1.Display();
    t1.Display();
    m1.Display();
    tm1.Display();
    return  0;
}