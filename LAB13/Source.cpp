#include <iostream>
#include "binarysearchtree.cpp"
#include "quetype.cpp"


void MIDBST(TreeType<int>& tree,  int arr[], int start, int end) {
	if (start <= end)
	{
		int mid = (start + end) / 2 ;
		
		tree.InsertItem(arr[mid]);
		MIDBST(tree, arr, start, mid - 1);
		MIDBST(tree, arr, mid + 1, end);
	}
}


int main() {
	TreeType<int> tree1, tree2, tree;
	int x;
	bool found, finished;
	/*   4 9 2 7 3 11 17 0 5 1  */
	
	if (tree1.IsEmpty())
		cout << "Tree is empty." << endl;
	else
		cout << "Tree is not empty." << endl;

	cout << "Insert 10 integers: ";
	for (int i = 0; i < 10; i++) {
		cin >> x;
		tree1.InsertItem(x);
	}

	if (tree1.IsEmpty())
		cout << "Tree is empty." << endl;
	else
		cout << "Tree is not empty." << endl;

	cout << tree1.LengthIs() << endl;
	
	cout << "Insert an integer for retrive: ";
	cin >> x;

	tree1.RetrieveItem(x, found);
	if (found) {
		cout << "Item is found." << endl;
	}
	else {
		cout << "Item is not found." << endl;
	}

	cout << "Insert an integer for retrive: ";
	cin >> x;

	tree1.RetrieveItem(x, found);
	if (found) {
		cout << "Item is found." << endl;
	}
	else {
		cout << "Item is not found." << endl;
	}

	int size = tree1.LengthIs();
	
	tree1.ResetTree(IN_ORDER);
	for (int i = 0; i < size; i++) {
		tree1.GetNextItem(x, IN_ORDER, finished);
		cout << x << " ";
	}
	cout << endl;

	tree1.ResetTree(PRE_ORDER);
	for (int i = 0; i < size; i++) {
		tree1.GetNextItem(x, PRE_ORDER, finished);
		cout << x << " ";
	}
	cout << endl;
	tree1.ResetTree(POST_ORDER);
	for (int i = 0; i < size; i++) {
		tree1.GetNextItem(x, POST_ORDER, finished);
		cout << x << " ";
	}
	cout << endl;
	
	tree1.MakeEmpty();
	if (tree1.IsEmpty())
		cout << " Now tree is empty." << endl;
	else
		cout << "Now tree is not empty." << endl;
	
	/*  11 9 4 2 7 3 17 0 5 1  */
	
	int size2;
	cout << endl << "Enter size: ";
	cin >> size2;
	int* arr = new int[size2];
	cout << "Insert " << size2 << " integers: ";
	for (int i = 0; i < size2; i++) {
		cin >> x;
		tree2.InsertItem(x);
	}
	tree2.ResetTree(IN_ORDER);
	for (int i = 0; i < size2; i++) {
		tree2.GetNextItem(x, IN_ORDER, finished);
		arr[i] = x;
	}
	MIDBST(tree, arr, 0, size2 - 1);
	cout << "Height of tree: " << tree2.Height() << endl;
	cout << endl;
	tree.ResetTree(PRE_ORDER);
	for (int i = 0; i < size2; i++) {
		tree.GetNextItem(x, PRE_ORDER, finished);
		cout << x << " ";
	}

	cout << endl << "Height of new tree: " << tree.Height() << endl;
	cout << endl;


	delete[] arr;
	return 0;
}

