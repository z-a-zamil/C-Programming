#include <iostream>
#include "linkunsortedtype.cpp"
#include <math.h>
using namespace std;

int maain() {
	// task 3(a)

	UnsortedType<int>list1;
	int x, numberOfInput;
	cout << "Enter the number of inputs: ";
	cin >> numberOfInput;
	cout << endl;
	for (int i = 0; i < numberOfInput; i++) {
		cout << "Enter the element of List1: ";
		cin >> x;
		list1.InsertItem(x);
	}
	list1.ResetList();
	cout << endl << "Output: " << endl;
	for (int i = 0; i < numberOfInput; i++) {
		list1.GetNextItem(x);
		cout << x << " ";
	}

	//task 3(b)

	cout << endl << endl;

	list1.ResetList();
	for (int i = 0; i < numberOfInput; i++) {
		list1.GetNextItem(x);
		if (x % 2 != 0) {
			list1.InsertItem(1);
		}
		else {
			list1.InsertItem(0);
		}
	}
	list1.ResetList();
	cout << endl << "Binary Output: " << endl;
	for (int i = 0; i < numberOfInput; i++) {
		list1.GetNextItem(x);
		cout << x << " ";
	}
	cout << endl << endl;

	//task 3(c)
	int sum = 0;
	list1.ResetList();
	cout << endl << "Decimal Output: " << endl;
	for (int i = 0; i < numberOfInput; i++) {
		list1.GetNextItem(x);
		sum += (x * pow(2, i));
	}
	cout << endl << sum << endl;

	return 0;
}