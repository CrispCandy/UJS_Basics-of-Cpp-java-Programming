#include  <iostream>
#include  <string>
using  namespace  std;
class  Node
{
public:
    Node(int  id, string  name);              //�����ź�����
    void  showMessage();                            //�������
    friend class LinkList;
    //��Linklist��Ϊ�Լ�����Ԫ��
protected:
    int  mId;                                                    //���
    string  mName;                                        //����
    Node* next;                                              //ָ��ָ����һ��
};
Node::Node(int  id, string  name)                                      //���ܱ�ź�����
{
    this->mId = id;
    this->mName = name;
    this->next = NULL;
}

void  Node::showMessage()                                                    //�������  
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
    Node* head;                                                                  //ָ��ָ��ͷ
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
    cout << "������ѧ��������" << endl;
    for (int i = 2018003; i >= 2018001; i--)            //������������
    {
        cin >> name;
        list1.addNodeAtHead(i, name);
    }
    for (int i = 2018004; i <= 2018006; i++)            //������������
    {
        cin >> name;
        list1.addNodeAtTail(i, name);
    }

    cout << "ѧ����ϢΪ��" << endl;
    list1.print();
    cout << "������Ҫɾ����ѧ��ѧ�ţ�" << endl;
    cin >> ID;
    cout << "ѧ����ϢΪ��" << endl;
    list1.deleteNode(ID);
    list1.print();
    cout << "������Ҫ�����ѧ��ѧ�ź�������" << endl;
    cin >> ID >> name;
    cout << "ѧ����ϢΪ��" << endl;
    list1.insertNode(ID, name);
    list1.print();
    return  0;
}