#include <iostream>
using namespace std;
class Student
{
    public:
        Student(string id="",string name="");
        virtual ~Student();

        string Getid() { return mId; }
        void Setid(string val) { mId = val; }
        string GetName() { return mName; }
        void SetName(string val) { mName = val; }
        void Show()
        {
            cout<<"ID:"<<this->mId<<"  Name:"<<this->mName<<endl;
        }
    protected:

    private:
        string mId;
        string mName;
};
Student::Student(string id,string name)
{
    this->mId=id;
    this->mName=name;
}

Student::~Student()
{
    //dtor
}
class LinkList;
class Node
{
    public:
        Node(const Student &t);
        Node(string id,string name);
        virtual ~Node();
        Student GetData() { return mData; }
        void SetData(Student val) { mData = val; }
        Node * GetNext() { return mNext; }
        void SetNext(Node * val) { mNext = val; }
        friend class LinkList;
    protected:

    private:
        Student mData;
        Node * mNext;
};
Node::Node(const Student &t):mData(t)
{
    //ctor
    this->mNext=NULL;
}
Node::Node(string id,string name):mData(id,name)
{
    this->mNext=NULL;
}
Node::~Node()
{
    //dtor
}

class LinkList
{
    public:
        LinkList();
        LinkList(const LinkList &list1);
        virtual ~LinkList();
        void InsertNodeAtHead(const Student &t);
     //   void InsertNodeAtTail(const Student &t);
     //   void DeleteNodeByID(string id);
        void Show();
        void DeleteLinkList();
        LinkList  operator =(const LinkList &list1);
    protected:
        Node *mHead;
        void copylist(const LinkList &list1);
       // Node *mTail;
        int mLen;
};
LinkList::LinkList()
{
    //ctor
    this->mHead=NULL;
    this->mLen=0;
}

LinkList::~LinkList()
{
    this->DeleteLinkList();
}
void LinkList::InsertNodeAtHead(const Student &t)
{
    Node *temp;
    temp=new Node(t);
    if(this->mHead==NULL)
    {
            this->mHead=temp;
            this->mLen++;
    }
    else
    {
        temp->mNext=this->mHead;
        this->mHead=temp;
        this->mLen++;
    }
}
void LinkList::Show()
{
    Node *temp;
    temp=this->mHead;
    while(temp!=NULL)
    {
        temp->mData.Show();
        temp=temp->mNext;
    }
}
void LinkList::DeleteLinkList()
{
   if (mHead != NULL) {
           Node* p;
           while (mHead != NULL) {
               p = mHead->mNext;
               delete mHead;
               mHead = p;
           }
       }
}
LinkList::LinkList(const LinkList &list1)
{
    this-> copylist(list1);
}
void LinkList::copylist(const LinkList &list1)
{
    Node* p;
    this->mLen=list1.mLen;
    p = list1.mHead;
    if(p!=NULL)
    {
        Node *q;
        q=this->mHead=new Node(*p);
        p=p->mNext;
        while (p!=0)
       {
            q->mNext = new Node(*p);
                        p = p->mNext;
                        q = q->mNext;
    }
    }
}
LinkList LinkList::operator=(const  LinkList& list1) {
    LinkList list;
    list.mLen = list1.mLen;    
    Node* qt = list1.mHead;
    Node* pt = this->mHead = new Node(*qt);
    if (qt != NULL) {
      qt = qt->mNext;
       while (qt != NULL) {
           pt->mNext = new Node(*qt);
           qt = qt->mNext;
           pt=pt->mNext;
        }
    }
   
    return *this;
}

int main()
{
    LinkList list1,list2;
    int n;
    string id,name;
    cin>>n;
    Student st;
    for(int i=0;i<n;i++)
    {
        cin>>id>>name;
        st.Setid(id);
        st.SetName(name);
        list1.InsertNodeAtHead(st);
    }
    list1.Show();
    list2=list1;
    list2.Show();
    list2.InsertNodeAtHead(Student("1005","Test"));
    LinkList list3(list2);
    list1.Show();
    list2.Show();
    list3.Show();
    cout << "Over!" << endl;
    return 0;
}


