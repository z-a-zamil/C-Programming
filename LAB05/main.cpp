#include<iostream>
#include "sortedtype.cpp"
#include "timestamp.cpp"
using namespace std;

int main() {
	
	SortedType<int> arr;
	cout << " Length: " << arr.LengthIs() << endl << endl;
	int x;

	for (int i = 0; i < 5; i++) {
		cout << " Enter an integer:  ";
		cin >> x;
		arr.InsertItem(x);
	}

	arr.ResetList();
	cout << endl << " Output: ";
	for (int i = 0; i < 5; i++) {
		arr.GetNextItem(x);
		cout << x << "  ";
	}

	cout << endl << endl << " Enter a Retrive item:  ";
	cin >> x;
	bool found;
	arr.RetrieveItem(x, found);
	if (found)
		cout << " Item is found." << endl;
	else
		cout << " Item is not found." <<  endl;

	cout << endl << " Enter another Retrive item:  ";
	cin >> x;
	arr.RetrieveItem(x, found);
	if (found)
		cout << " Item is found." << endl;
	else
		cout << " Item is not found." << endl;

	found = arr.IsFull();
	if (found) 
		cout << endl << " List is full." << endl;
	else
		cout << endl << " List is not full." << endl;

	cout << endl << " Enter an integer for Delete:  ";
	cin >> x;
	arr.DeleteItem(x);
	arr.ResetList();
	int size = arr.LengthIs();
	cout << endl << " Output: ";
	for (int i = 0; i < size; i++) {
		arr.GetNextItem(x);
		cout << x << "  ";
	}

	if (arr.IsFull())
		cout << endl << " List is full." << endl;
	else
		cout << endl << " List is not full." << endl;

	
	cout << endl << endl;
	TimeStamp<int> t1(15, 34, 23);
	TimeStamp<int> t2(13, 13, 02);

	if (t1 == t2) {
		cout << " t1 is equal to t2." << endl;
	}
	else {
		cout << " t1 is not equal to t2." << endl;
		if (t1 < t2) {
			cout << " t1 is less than t2." << endl;
		}
		else {
			cout << " t1 is greater than t2." << endl;
		}
	}
	TimeStamp<int> time;
	
	int sec, min, hour;
	cout << endl << " Input TimeStamp: " << endl;
	for (int i = 0; i < 5; i++) {
		cin >> sec >> min >> hour;
		time.InsertItem(sec, min, hour);
	}
	time.ResetList();
	cout << endl;
	time.Print();
	time.ResetList();
	cout << endl << " Enter a time to delete (ss mm hh): ";
	cin >> sec >> min >> hour;
	bool bb = false;
	
	time.RetrieveItem(sec, min, hour, bb);
	if (bb) {
		cout << " Item found." << endl;
		time.DeleteItem(sec, min, hour);
	}
	else {
		cout << endl << " Time not found." << endl;
	}
	
	time.ResetList();
	cout << endl;
	time.Print();
	return 0;
}