#include<bits/stdc++.h>
using namespace std;
struct  node

{

    int  data;

    node* next;

    node(int  d, node* n = NULL) :data(d), next(n) {}

};

class  Joseph

{

private:

    node* head;

public:

    Joseph(int  n);

    ~Joseph();

    void  simulate();

};

Joseph::Joseph(int n) {
    if (n == 0) { head = NULL; }
    else{
        node* p, * q;
        p = new node(1);
        head = p;
        for (int i = 2; i <= n; i++) {
            q = new node(i);
            p->next = q;
            /**/p = q;
        }
        p->next = head;
        p = head;
    }
}
Joseph::~Joseph(){}
void Joseph::simulate() {
    if (head == NULL)cout << "N0 0ne!";
    else {
        node* p , * q ;
        p = head;
        while (p->next != p) {
            for (int i = 1; i < 3; i++) {
                q = p;
                p = p->next;
            }
            cout << p->data << " ";
            q->next = p->next;
            p = p->next;
        }
        cout << "\n" << p->data;
    }
}


int  main()

{

    int  n;

    cin >> n;          //������5����5��

    Joseph  jos(n);//������5����������5������dataΪ1��2��3��4��5������˵����

    jos.simulate();

    //������С���һ���������̭�˵���ţ���ż�һ���ո��������3  1  5  2

    //�ڶ������ʣ���˵���ţ�4

    return  0;

}
