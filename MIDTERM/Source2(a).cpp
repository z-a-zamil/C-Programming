/*
#include <iostream>
#include "stacktype.cpp"
using namespace std;

int main() {
	
	int x, size, mult;
	cout << "Enter the size of stack: ";
	cin >> size;
	cout << endl;
	StackType<int> stk1(size), stk2(size), tempstk(size);
	for (int i = 0; i < size; i++) {
		cout << "Enter the element of stack1: ";
		cin >> x;
		stk1.Push(x);
	}
	cout << endl;
	for (int i = 0; i < size; i++) {
		cout << "Enter the element of stack2: ";
		cin >> x;
		tempstk.Push(x);
	}
	for (int i = 0; i < size; i++) {
		stk2.Push(tempstk.Top());
		tempstk.Pop();
	}
	cout << endl << "Output:" << endl;
	for (int i = 0; i < size; i++) {
		try {
			mult = stk1.Top() * stk2.Top();
			stk1.Pop();	 stk2.Pop();
			cout << mult << " ";
		}
		catch (EmptyStack) {

		}
	}
	cout << endl;
	return 0;
}
*/