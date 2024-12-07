#include <iostream>
#include "stacktype.cpp"
using namespace std;

int main() {
	
	StackType<int> stack1, tStack;
	int x;
	if (stack1.IsEmpty()) {
		cout << "Stack is Empty" << endl;
	}
	cout << endl << "Enter 4 integers: " << endl;
	for (int i = 0; i < 4; i++) {
		cin >> x;
		stack1.Push(x);
	}
	if (stack1.IsEmpty()) {
		cout << endl << "Stack is Empty" << endl;
	}
	else {
		cout << endl << "Stack is not Empty" << endl;
	}
	if (stack1.IsFull()) {
		cout << endl << "Stack is full" << endl;
	}
	else {
		cout << endl << "Stack is not full" << endl;
	}
	for (int i = 0; i < 4; i++) {
		tStack.Push(stack1.Top());
		stack1.Pop();
	}

	cout << endl << "Output: ";
	for (int i = 0; i < 4; i++) {
		x = tStack.Top();
		cout << x << " ";
		stack1.Push(x);
		tStack.Pop();
	}
	
	if (!stack1.IsFull()) {
		cout << endl << endl << "Enter another item: ";
		cin >> x;
		stack1.Push(x);
	}
	for (int i = 0; i < 5; i++) {
		tStack.Push(stack1.Top());
		stack1.Pop();
	}
	cout << endl << "Output: ";
	for (int i = 0; i < 5; i++) {
		x = tStack.Top();
		cout << x << " ";
		stack1.Push(x);
		tStack.Pop();
	}
	if (stack1.IsFull()) {
		cout << endl << "Stack is full" << endl;
	}
	else {
		cout << endl << "Stack is not full" << endl;
	}
	stack1.Pop();		stack1.Pop();
	x = stack1.Top();
	cout << endl << x << endl;

	


	StackType<char> parenStack;
	string str;
	char ch;
	for (int j = 0; j < 4; j++) {
		cout << endl << "Enter a strings of parentheses: ";
		cin >> str;

		int size = str.size(), flag = 0;

		for (int i = 0; i < size; i++) {
			ch = str[i];
			if (ch == '(') {
				parenStack.Push(ch);
			}
			else if (ch == ')') {
				if (parenStack.IsEmpty()) {
					flag = 1;
					break;
				}
				else {
					parenStack.Pop();
				}
			}
		}

		if (parenStack.IsEmpty() && flag == 0) {
			cout << "Balanced" << endl;
		}
		else {
			cout << "Not balanced" << endl;
		}

	}
	
	
	char ch1 = '\0';
	cout <<endl<< " Enter String: ";
	cin >> str;

	int strSize = str.size(), sizeStack = 0;
	StackType<char> strStack, tStrStack;

	for (int i = 0; i < strSize; i++) {
		ch = str[i];
		if (strStack.IsEmpty()) {
			strStack.Push(ch);
		}
		else {
			ch1 = strStack.Top();
		}
		if (ch != ch1) {
			strStack.Push(ch);
			sizeStack++;
		}
		else {
			continue;
		}
	}

	for (int i = 0; i < sizeStack; i++) {
		tStrStack.Push(strStack.Top());
		strStack.Pop();
	}
	for (int i = 0; i < sizeStack; i++) {
		ch = tStrStack.Top();
		cout << ch << " ";
		tStrStack.Pop();
	}

	return 0;
}