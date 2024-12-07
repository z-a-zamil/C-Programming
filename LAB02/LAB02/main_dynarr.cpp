#include<iostream>
#include"dynarr.h"
#include"dynarr2.h"
using namespace std;

int main() {
	cout << "\t *** Task1 ***" << endl << endl;
	dynArr d1();
	dynArr d2(5);

	int val;

	for (int i = 0; i < 5; i++) {
		cout << "Enter value of [" << i << "]: ";
		cin >> val;
		d2.setValue(i, val);
	}

	cout << "Output: " << endl;
	for (int i = 0; i < 5; i++) {
		cout << d2.getValue(i) << " ";
	}
	cout << endl << endl;

	cout << "\t *** Task2 ***" << endl << endl;
	int newsize;
	cout << "Enter new size: ";
	cin >> newsize;
	
	d2.allocate(newsize);
	
	for (int i = 5; i < newsize; i++) {
		cout << "Enter new value of [" << i << "]: ";
		cin >> val;
		d2.setValue(i, val);
	}

	cout << "Output: " << endl;
	for (int i = 0; i < newsize; i++) {
		cout << d2.getValue(i) << " ";
	}
	cout << endl << endl;

	cout << "\t *** Task3 ***" << endl << endl;

	int r, c;
	cout << "enter row: ";
	cin >> r;
	cout << "enter col: ";
	cin >> c;

	dynArr2 dy2(r,c);

	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			cout << "Enter value of [" << i << "][" << j << "]: ";
			cin >> val;
			dy2.setValue2(i, j, val);
		}
	}
	cout << "output:" << endl;
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			cout << dy2.getValue2(i, j) << " ";
		}
		cout << endl;
	}

	return 0;
}