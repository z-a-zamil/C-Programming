#include <iostream>
#include "binarysearchtree.cpp"
#include "quetype.cpp"

int main() {
	TreeType<int> tree1;
	int x;
	bool found;

	/*    4 9 2 7 3 11 17 0 5 1  */
	cout << "Insert 10 integers: ";
	for (int i = 0; i < 10; i++) {
		cin >> x;
		tree1.InsertItem(x);
	}
	
	cout << endl << "\t *** TASK_02 ***\n !!! PRINTING THE TREE WHERE \"left > roto > right\" !!!" << endl << endl;
	tree1.Print();
	cout << endl;

	cout << endl << "\t *** TASK_03 ***\n Insert One more integer: ";
	cin >> x;
	tree1.InsertItem(x);

	cout << endl << " *** AFTER INSERTING NEW ITEM ***" << endl << endl;
	tree1.Print();

	cout << endl;

	return 0;
}