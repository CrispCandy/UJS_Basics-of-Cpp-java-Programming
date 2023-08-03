#include  <iostream>
using  namespace  std;
class  myCArray
{
private:
    int* p_arr;
    int  size;
public:
    myCArray();  //缺省构造函数
    myCArray(int* p_a, int  s);  //构造函数
    myCArray(const  myCArray& r_other);//复制构造函数
    ~myCArray();//析构函数
    int  operator[](int  pos)  const;  //访问数组元素值的下标运算符重载函数    
    int& operator[](int  pos);  //设置数组元素值的下标运算符重载函数
    myCArray operator+(myCArray f);
    myCArray operator-(myCArray f);

    void  print()  const;
};
myCArray::myCArray():p_arr(NULL),size(0){}
myCArray::myCArray(int* p_a, int s) {
    size = s;
    p_arr = new int[size];
    for (int i = 0; i < size; i++) {
        p_arr[i] = p_a[i];
    }
}
myCArray::myCArray(const  myCArray& r_other) {
    size = r_other.size;
    p_arr = new int[size];
    for (int i = 0; i < size; i++) {
        p_arr[i] = r_other.p_arr[i];
    }
}
myCArray::~myCArray(){}
int::myCArray::operator[](int pos) const {
    return p_arr[pos];
}
int& ::myCArray::operator[](int pos) {
    return p_arr[pos];
}
myCArray myCArray::operator+(myCArray f) {
    int* p = new int[size];
    for (int i = 0; i < size; i++) {
        p[i] = p_arr[i] + f.p_arr[i];
    }
    return myCArray(p, size);
}
myCArray myCArray::operator-(myCArray f) {
    int* t = new int[size];
    for (int i = 0; i < size; i++) {
        t[i] = p_arr[i] - f.p_arr[i];
    }
    return myCArray(t, size);
}
void  myCArray::print()  const
{
    for (int i = 0; i < this->size; i++)
        cout << this->p_arr[i] << "    ";
    cout << endl;

}
int  main()
{
    int  a[5] = { 1,2,3,4,5 }, b[5] = { 1,1,1,1,1 };
    myCArray  t1(a, 5), t2(b, 5), t3;
    t3 = t1 + t2;
    t3.print();
    t3 = t1 - t2;
    t3[4] = 100;
    t3.print();
    return  0;
}