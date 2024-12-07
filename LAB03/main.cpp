#include<iostream>
#include "dynarr.h"
#include "complex.h"
#include "dynarr.cpp"

using namespace std;

int main() {
	

	cout << "\t***** TASK 01 ***** " << endl << endl;;

	int s,n,sr;
	
	cout << "Enter array Size: ";
	cin >> s;
	dynArr<int> A(s);
	
	for (int i = 0; i < s; i++) {
		cout << "Enter element of [" << i << "]: ";
		cin >> n;
		A.setValue(i, n);
	}
	cout << endl;
	
	cout << "Enter Search Item: ";
	cin >> sr;

	if (A.search_item(sr) != -1) {
		cout << "Item found." << endl << endl;
	} else {
		cout << "Item not found." << endl << endl;
	}
	
	cout << "\t***** TASK 02 ***** " << endl << endl;

	Complex C1(1, 2.5), C2(6, 1);
	Complex C3;

	C3 = C1 * C2;
	cout << "Multiplication:" << endl;
	C3.Print();

	cout << endl;
	cout << "Output for Not Equal operator:" << (C3 != C2) << endl << endl;

	return 0;
}