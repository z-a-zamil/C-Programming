#include<iostream>
#include "unsortedtype.cpp"
#include "studentinfo.h"

using namespace std;

int main() {

	UnsortedType<int> arr;
	int x;
	
	for (int i = 0; i < 4; i++){
		cout << "Enter an integer: ";
		cin >> x;
		arr.InsertItem(x);
	}

	cout << endl << "Output: " ;
	for (int i = 0; i < arr.LengthIs(); i++) {
		arr.GetNextItem(x);
		cout << x << " ";
	}
	cout << endl;
	
	cout << endl << "Length of the list: " << arr.LengthIs() << endl;

	cout << endl << "Enter One item: ";
	cin >> x;
	arr.InsertItem(x);
	
	cout << "Output: " ;
	arr.ResetList();
	for (int i = 0; i < arr.LengthIs(); i++) {
		arr.GetNextItem(x);
		cout << x << " ";
	}
	cout << endl << endl;

	cout << "Enter Retrieve item: ";
	cin >> x;
	bool found;
	
	arr.RetrieveItem(x, found);
	if (found)
		cout << "Item is found" << endl;
	else
		cout << "Item is not found" << endl;

	cout << endl;
	
	cout << "Enter another Retrieve item: ";
	cin >> x;
	
	arr.RetrieveItem(x, found);
	if (found)
		cout << "Item is found" << endl;
	else
		cout << "Item is not found" << endl;

	cout << endl;
	cout << "Enter another Retrieve item: ";
	cin >> x;

	arr.RetrieveItem(x, found);
	if (found)
		cout << "Item is found" << endl;
	else
		cout << "Item is not found" << endl;

	cout << endl;
	cout << "Enter another Retrieve item: ";
	cin >> x;

	arr.RetrieveItem(x, found);
	if (found)
		cout << "Item is found" << endl;
	else
		cout << "Item is not found" << endl;


	cout << endl;
	bool full = arr.IsFull();
	if (full)
		cout << "List is full." << endl;
	else
		cout << "List is not full." << endl;

	cout << endl;
	cout << "Enter a delete item: ";
	cin >> x;

	arr.DeleteItem(x);
	full = arr.IsFull();
	if (full)
		cout << "List is full." << endl;
	else
		cout << "List is not full." << endl;

	cout << endl << endl << "Enter another delete item: ";
	cin >> x;

	arr.DeleteItem(x);
	cout << "Output: ";
	arr.ResetList();
	for (int i = 0; i < arr.LengthIs(); i++) {
		arr.GetNextItem(x);
		cout << x << " ";
	}

	cout << endl << endl << "Enter another delete item: ";
	cin >> x;

	arr.DeleteItem(x);
	cout << "Output: ";
	arr.ResetList();
	for (int i = 0; i < arr.LengthIs(); i++) {
		arr.GetNextItem(x);
		cout << x << " ";
	}
	cout << endl << endl;
	

	StudentInfo s1(15234, "Jon", 2.6);
	StudentInfo s2(13569, "Sandor", 1.2);

	if (s1 == s2) {
		cout << "s1 and s2 got equal cgpa." << endl;
	}
	else {
		cout << "s1 and s2 got not equal cgpa." << endl;
		if (s1 < s2) {
			cout << "s1 got lower cgpa than s2." << endl;
		}
		else
			cout << "s1 got higher cgpa than s2." << endl;
	}

	StudentInfo stu;
	int ID;	string NAME;  float CGPA;	bool bb;

	for (int i = 0; i < 5; i++) {
		cout << endl << "Enter ID of [" << i << "]: ";	cin >> ID;
		cout << "Enter NAME of [" << i << "]: ";	cin >> NAME;
		cout << "Enter CGPA of [" << i << "]: ";	cin >> CGPA;
		stu.InsertItem(ID, NAME, CGPA);
	}

	cout << endl << "Student List:" << endl;
	stu.ResetList();
	stu.Print();

	cout << endl << "Enter an ID to Delete: ";		cin >> ID;
	stu.DeleteItem(ID);
	cout << endl << "Enter an ID to Retrieve: ";	cin >> ID;
	stu.RetrieveItem(ID, NAME, CGPA, bb);
	if (bb) {
		cout <<"Item Found.\n " << ID << ", " << NAME << ", " << CGPA << endl;
	}
	cout << endl<<"Student List after delete item:" << endl;
	stu.ResetList();
	stu.Print();
	return 0;
}