#include<iostream>
#include "unsortedtype.cpp"
using namespace std;

int main() {
	UnsortedType<int> arr1, arr2;
	int x;

	for (int i = 0; i < 5; i++) {
		cout << "Enter an integer for arr1: ";
		cin >> x;
		arr1.InsertItem(x);
	}

	cout << endl;
	for (int i = 0; i < 5; i++) {
		cout << "Enter an integer for arr2: ";
		cin >> x;
		arr2.InsertItem(x);
	}

	arr1.ResetList();		arr2.ResetList();
	cout << endl << "Output1: ";
	for (int i = 0; i < arr1.LengthIs(); i++) {
		arr1.GetNextItem(x);
		cout << x << " ";
	}
	cout << endl;
	cout << endl << "Output2: ";
	for (int i = 0; i < arr2.LengthIs(); i++) {
		arr2.GetNextItem(x);
		cout << x << " ";
	}
	cout << endl;
	
	int size1 = arr1.LengthIs(), x1;
	int size2 = arr2.LengthIs(), x2;
	
	UnsortedType<int> newArr;
	
	arr1.ResetList();		
	arr2.ResetList();
	
	for (int i = 0; i < size1; i++) {
		arr1.GetNextItem(x1);
		for (int j = 0; j < size2; j++) {
			arr2.GetNextItem(x2);
			if (x1 == x2) {
				newArr.InsertItem(x1);
			}
		}
		arr2.ResetList();
	}

	cout << endl << " New Output : ";
	for (int i = 0; i < newArr.LengthIs(); i++) {
		newArr.GetNextItem(x);
		cout << x << " ";
	}
	cout << endl;


	return 0;
}