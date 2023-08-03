#include<bits/stdc++.h>
using namespace std;
class Stack {
	int top;//栈顶位置（下标）
	int* elements; //动态建立的栈
	int maxSize;         //栈最大容纳的元素个数
public:
	Stack(int = 20);       //形参为栈能够容纳的元素个数
	~Stack();
	Stack(const Stack&);
	void Push(const int& data);                    //将data压栈
	int Pop();                            //弹出栈顶元素
	void MakeEmpty();                  //清空栈，数据重新从0下标存放
	bool IsEmpty() const;          //栈是否为空
	bool IsFull() const;     //栈是否已满
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
	cin >> num;//栈中欲存储的元素个数
	Stack stack1(num);
	for (int i = 0; i < num; i++) {
		cin >> data;
		stack1.Push(data);
	}
	Stack stack2(stack1);
	if (stack2.IsFull()) cout << "Stack Full" << endl;
	while (!stack2.IsEmpty())//栈非空
		cout << stack2.Pop() << ' ';
	cout << endl;
	stack1.MakeEmpty();
	cout << stack1.IsEmpty() << endl;
	return 0;
}

