/*
#include <iostream>
#include "binarysearchtree.cpp"
#include "quetype.cpp"
using namespace std;

int main() {
	
	TreeType<int> tree;
	int size, x;
	cout << "Size: ";
	cin >> size;
	cout << "Enter " << size << " elements: ";
	// task_03 (a)
	for (int i = 0; i < size; i++) {
		cin >> x;
		tree.InsertItem(x);
	}
	//task_03 (b)
	cout << tree.LargestNumber()<<endl;

	//task_03 (c)
	cout << tree.Height() << endl;
	return 0;
}
*/