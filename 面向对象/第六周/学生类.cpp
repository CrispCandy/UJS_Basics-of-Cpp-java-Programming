#include<iostream>
#include<string>
using  namespace  std;
class  Date
{
    int  year;
    int  month;
    int  day;
public:
    Date(int  year = 0, int  month = 0, int  day = 0);
    int  Getyear() { return  year; }
    int  Getmonth() { return  month; }
    int  Getday() { return  day; }
};
Date::Date(int  year , int  month , int  day ) {
    this->year = year;
    this->month = month;
    this->day = day;
}

class  Student
{
    static  int  Count;
    string  Name;
    int  Age;
    double  Point;
    Date  Birthday;
public:
    Student();
    Student(string  name, int  age, double  point, Date  birthday);
    Student(const  Student& a);
    ~Student();
    int  Getcount();
    void  Show();
    void  Set(string  name, int  age, double  point, Date  birthday);
    friend  void  Sort(Student  a[], int  b);
};
int Student::Count = 0;
Student::Student() {
    this->Name = "0";
    this->Age = 0;
    this->Point = 0;
    this->Birthday = 0;
}
Student::Student(string  name, int  age, double  point, Date  birthday)  {
    this->Name = name;
    this->Age = age;
    this->Point = point;
    this->Birthday = birthday;
}
Student::Student(const  Student& a)  {
    Name = a.Name;
    Age = a.Age;
    Point = a.Point;
    Birthday = a.Birthday;
}
Student::~Student()
{}
int  Student::Getcount() {
    Count=5;
    return Count;
}
void  Student::Show() {
    cout << this->Name << '\t' << this->Age << '\t';
    cout <<Birthday.Getyear() <<"."<<Birthday.Getmonth()<<"."<<Birthday.Getday() << '\t';
    cout<<this-> Point<<'\t' << endl;
}
void  Student::Set(string  name, int  age, double  point, Date  birthday) {
    this->Name = name;
    this->Age = age;
    this->Point = point;
    this->Birthday = birthday;
}
void  Sort(Student  a[], int  b) {
    int i, j;
    
    for (i = 0; i < b; i++) {
        for (j = 0; j < b - i - 1; j++) {
            if (a[j].Point < a[j + 1].Point) {
               Student k = a[j + 1];
                a[j + 1] = a[j];
                a[j] = k;
            }
        }
    }
}
int  main()
{
    cout << "请输入学生信息：" << endl;
    string  name; int  age; double  point;
    int  year, month, day;
    Student  a[5];
    for (int i = 0; i < 5; i++)
    {
        cin >> name >> age >> point >> year >> month >> day;
        Date  birthday(year, month, day);
        a[i].Set(name, age, point, birthday);
    }
    Sort(a, 5);
    cout << "共有学生" << a[0].Getcount() << "名。" << endl;
    cout << "分别为：" << endl;
    for (int i = 0; i < 5; i++)
    {
        a[i].Show();
    }
    return  0;
}