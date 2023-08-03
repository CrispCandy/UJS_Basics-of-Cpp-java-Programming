#include  <iostream>
#include  <string>
using  namespace  std;
class  Node
{
public:
    Node(int  id, string  name);              //定义编号和姓名
    void  showMessage();                            //输出数据
    friend class LinkList;
    //把Linklist作为自己的友元类
protected:
    int  mId;                                                    //编号
    string  mName;                                        //姓名
    Node* next;                                              //指针指向下一个
};
Node::Node(int  id, string  name)                                      //接受编号和姓名
{
    this->mId = id;
    this->mName = name;
    this->next = NULL;
}

void  Node::showMessage()                                                    //输出数据  
{
    cout << this->mId << "  " << this->mName << endl;
}
class  LinkList
{
public:
    LinkList() { head = NULL; }
    void addNodeAtHead(int id, string name);
    void addNodeAtTail(int id, string name);
    void print();
    void deleteNode(int id);
    void insertNode(int id, string name);
protected:
    Node* head;                                                                  //指针指向头
};
void LinkList::addNodeAtHead(int id, string name) {
    Node* pList;
    pList = new Node(id, name);
    if (head == NULL) {
        head = pList;
    }
    else {
        pList->next = head;
        head = pList;
    }
}
void LinkList::addNodeAtTail(int id, string name) {
    Node* pList;
    Node* pTail;
    pList = new Node(id, name);
    if (head == NULL) {
        head = pList;
    }
    else {
        pTail = head;
        while (pTail->next != NULL) {
            pTail = pTail->next;
            pTail->next = pList;
            pList->next = NULL;
        }
    }
}
void LinkList::print() {
    Node* a;
    a = head;
    cout << a->mId << " " << a->mName << endl;
}
void LinkList::deleteNode(int id) {
    Node* f, * p = NULL;
    f = head;
    if (f->mId < id) {
        while (f->mId != id - 1) 
            f = f->next;
        
        p = f->next;
        f->next = p->next;
        delete p;
    }
    else {
        head = head->next;
        delete f;
    }
}
void LinkList::insertNode(int id, string name) {
    Node* t, * p;
    p = new Node(id, name);
    t = head;
    int j = 0;
    while (p != NULL&&j != id - 1) {
        t = t->next;
        j++;
    }
    if (t != NULL) {
        p->next = t->next;
        t->next = p;
    }
}
int  main()
{
    int  ID;
    LinkList  list1;
    string  name;
    cout << "请输入学生姓名：" << endl;
    for (int i = 2018003; i >= 2018001; i--)            //依次输入名字
    {
        cin >> name;
        list1.addNodeAtHead(i, name);
    }
    for (int i = 2018004; i <= 2018006; i++)            //依次输入名字
    {
        cin >> name;
        list1.addNodeAtTail(i, name);
    }

    cout << "学生信息为：" << endl;
    list1.print();
    cout << "请输入要删除的学生学号：" << endl;
    cin >> ID;
    cout << "学生信息为：" << endl;
    list1.deleteNode(ID);
    list1.print();
    cout << "请输入要插入的学生学号和姓名：" << endl;
    cin >> ID >> name;
    cout << "学生信息为：" << endl;
    list1.insertNode(ID, name);
    list1.print();
    return  0;
}