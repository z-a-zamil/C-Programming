/*
#include <iostream>
#include "arrayunsortedtype.cpp"
using namespace std;

int main() {
	UnsortedType<int> list1, list2;
	int x, numberOfInput;
	cout << "Enter the number of input: ";
	cin >> numberOfInput;
	cout << endl;
	for (int i = 0; i < numberOfInput; i++) {
		cout << "Enter the element of List1: ";
		cin >> x;
		list1.InsertItem(x);
	}
	cout << endl;
	for (int i = 0; i < numberOfInput; i++) {
		cout << "Enter the element of List2: ";
		cin >> x;
		list2.InsertItem(x);
	}
	cout << endl<<" List1: ";
	list1.ResetList();
	for (int i = 0; i < list1.LengthIs(); i++) {
		list1.GetNextItem(x);
		cout << x << " ";
	}
	cout << endl;
	cout << endl <<"List2: ";
	list2.ResetList();
	for (int i = 0; i < list2.LengthIs(); i++) {
		list2.GetNextItem(x);
		cout << x << " ";
	}
	cout << endl;
	list1.ResetList();		list2.ResetList();

	cout << endl;
	UnsortedType<int> sumList;
	int num1, num2;
	int sum = 0, carry = 0;
	double rem;
	for (int i = 0; i < numberOfInput; i++) {
		list1.GetNextItem(num1);
		list2.GetNextItem(num2);
		sum = (num1 + num2);
		if (sum <= 9) {
			sumList.InsertItem(sum + carry);
		}
		else {
			rem = sum % 10;
			sumList.InsertItem(rem + carry);
			carry = sum / 10;
		}
		
	}

	cout << endl<<"SumList: ";
	sumList.ResetList();
	for (int i = 0; i < sumList.LengthIs(); i++) {
		sumList.GetNextItem(x);
		cout << x << " ";
	}
	cout << endl;
	return 0;
}
*/