#include<bits/stdc++.h>
using namespace std;
class Stack {
	int top;//ջ��λ�ã��±꣩
	int* elements; //��̬������ջ
	int maxSize;         //ջ������ɵ�Ԫ�ظ���
public:
	Stack(int = 20);       //�β�Ϊջ�ܹ����ɵ�Ԫ�ظ���
	~Stack();
	Stack(const Stack&);
	void Push(const int& data);                    //��dataѹջ
	int Pop();                            //����ջ��Ԫ��
	void MakeEmpty();                  //���ջ���������´�0�±���
	bool IsEmpty() const;          //ջ�Ƿ�Ϊ��
	bool IsFull() const;     //ջ�Ƿ�����
};
Stack::Stack(int num) {
	elements = new int[num];
	maxSize = num;
	top = 0;
}
Stack::Stack(const Stack& s) {
	elements = new int[s.maxSize];
	maxSize = s.maxSize;
	top = s.top;
	for (int i = 0; i < top; i++) {
		elements[i] = s.elements[i];
	}
}
void Stack::MakeEmpty() {
	top = 0;
}
bool Stack::IsEmpty()const {
	if (top == 0)return 1;
	return 0;
}
bool Stack::IsFull()const {
	if (top == maxSize)return 1;
	return 0;
}
void Stack::Push(const int& data) {
	if (top == maxSize) return;
	else {
		elements[top] = data;
		top++;
	}
}
int Stack::Pop() {
	
		return this->elements[top-- - 1];
	
}
Stack::~Stack()
{
	delete[]elements;
	top = 0;
	maxSize = 0;
}
int main() {
	int num, data;
	cin >> num;//ջ�����洢��Ԫ�ظ���
	Stack stack1(num);
	for (int i = 0; i < num; i++) {
		cin >> data;
		stack1.Push(data);
	}
	Stack stack2(stack1);
	if (stack2.IsFull()) cout << "Stack Full" << endl;
	while (!stack2.IsEmpty())//ջ�ǿ�
		cout << stack2.Pop() << ' ';
	cout << endl;
	stack1.MakeEmpty();
	cout << stack1.IsEmpty() << endl;
	return 0;
}

