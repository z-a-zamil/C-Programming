#include <iostream>
#include "stacktype.cpp"
#include "quetype.cpp"
using namespace std;

int main() {
	
	cout << " ***** Implementation of a Queue using Stack *****" << endl;
	StackType<int> stak1(5), stak2(5);
	int y;
	cout << " Enter five integers: ";
	for (int i = 0; i < 5; i++) {
		cin >> y;
		stak1.Push(y);
	}

	for (int i = 0; i < 5; i++) {
		stak2.Push(stak1.Top());
		stak1.Pop();
	}
	cout << endl << " Queue Output: ";
	for (int i = 0; i < 5; i++) {
		y = stak2.Top();
		cout << y << " ";
		stak2.Pop();
	}
	cout << endl;
	

	cout << endl << " ***** Implementation of a Stack Using Queue *****" << endl;
	QueType<int> questk1(5), questk2(5);
	int z;
	cout << " Enqueue five items: ";
	
	for (int i = 0; i < 5; i++) {
		cin >> z;
		try {
			questk2.Enqueue(z);
			while (!questk1.IsEmpty()) {
				questk1.Dequeue(z);
				questk2.Enqueue(z);
			}
			while (!questk2.IsEmpty()) {
				questk2.Dequeue(z);
				questk1.Enqueue(z);
			}
		}
		catch (FullQueue) {
			
		}
		catch (EmptyQueue) {
			
		}
	}
	/*
		enqu 2 
		dequ 1	enqu 2
		que 1 = que 2

	*/
	cout << endl << " Stack Output: ";
	for (int i = 0; i < 5; i++) {
		try {
			questk1.Dequeue(z);
			cout << z << " ";
		}
		catch (EmptyStack) {
				
		}
	}
	cout << endl;
	return 0;
}