#include <iostream>
#include <string>
#include "quetype.cpp"
using namespace std;

int main() {
	QueType<int> Que1(5), tempQue(5);
	int x;
	
	if (Que1.IsEmpty()) {
		cout << " Queue is Empty" << endl;
	}
	else {
		cout << " Queue is not Empty" << endl;
	}

	cout << endl << " Enter Four items: ";
	for (int i = 0; i < 4; i++) {
		cin >> x;
		Que1.Enqueue(x);
		tempQue.Enqueue(x);
	}
	
	if (Que1.IsEmpty()) {
		cout << endl << " Queue is Empty" << endl;
	}
	else {
		cout << endl << " Queue is not Empty" << endl;
	}

	if (Que1.IsFull()) {
		cout << endl << " Queue is full" << endl;
	}
	else {
		cout << endl << " Queue is not full" << endl;

	}


	cout << endl << " Enqueue Another Item: ";
	cin >> x;
	Que1.Enqueue(x);
	tempQue.Enqueue(x);
	cout << endl << " Output:";
	for (int i = 0; i < 5; i++) {
		tempQue.Dequeue(x);
		cout << x << " ";
	}
	tempQue.MakeEmpty();

	if (Que1.IsFull()) {
		cout << endl << " Queue is Full" << endl;
	}
	else {
		cout << endl << " Queue is not Full" << endl;
	}
	
	cout << endl << " Enqueue Another Item: ";
	cin >> x;
	if (Que1.IsFull()) {
		cout << endl << " Queue Overflow" << endl;
	}
	else {
		Que1.Enqueue(x);
		cout << "Enqueue is success" << endl;
	}
	
	Que1.Dequeue(x);
	Que1.Dequeue(x);
	
	while (!Que1.IsEmpty()) {
		Que1.Dequeue(x);
		tempQue.Enqueue(x);
	}
	cout << endl << " Output:";
	for (int i = 0; i < 3; i++) {
		tempQue.Dequeue(x);
		Que1.Enqueue(x);
		cout << x << " ";
	}
	
	
	Que1.Dequeue(x);
	Que1.Dequeue(x);
	Que1.Dequeue(x);
	cout << endl;
	if (Que1.IsEmpty()) {
		cout << " Queue is Empty" << endl;
	}
	else {
		cout << " Queue is not Empty" << endl;
	}

	if (Que1.IsEmpty()) {
		cout << endl << " Queue Underflow" << endl;
	}
	else {
		Que1.Enqueue(x);
		cout << "Dequeue is success" << endl;
	}
	
	cout << endl << " Enter an integer: ";
	cin >> x;
	QueType<string> strQue(x);
	string str1, str2;
	strQue.Enqueue("1");
	for (int i = 0; i < x; i++) {
		try {
			strQue.Dequeue(str1);
			str2 = str1;
			cout << " " << str1 << endl;
			str1.append("0");
			strQue.Enqueue(str1);
			str2.append("1");
			strQue.Enqueue(str2);
		}
		catch (FullQueue) {

		}
		catch (EmptyQueue) {

		}
	}

	return 0;
}