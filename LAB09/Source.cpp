#include <iostream>
#include "quetype.cpp"
using namespace std;


int main() {
	//task01
	cout << endl << " **** Task 01 ****\n !!! WARNING: This code will work only for 3 coins !!!" << endl << endl;
	QueType<int> que1, que2, que3;
	int size, total, temp, count = 0;
	
	cout << "Enter number of coins: ";
	cin >> size;
	int* array = new int[size];

	cout << "Enter coins: ";
	for (int i = 0; i < size; i++) {
		cin >> array[i];
	}
	cout << "Enter total amount: ";
	cin >> total;

	for (int i = 0; i < size; i++) {
		que1.Enqueue(array[i]);	   que2.Enqueue(array[i]);  que3.Enqueue(array[i]);
	}
	bool match= false;
	while (!match) {

		for (int i = 0; i < size; i++) {
			que1.Dequeue(temp);
			if (temp == total)
			{
				match = true;
				break;
			}
			else 
			{
				que1.Enqueue(temp + array[0]);
			}
		}
		for (int i = 0; i < size; i++) {
			que2.Dequeue(temp);
			if (temp == total)
			{
				match = true;
				break;
			}
			else
			{
				que2.Enqueue(temp + array[1]);
			}
		}
		for (int i = 0; i < size; i++) {
			que3.Dequeue(temp);
			if (temp == total)
			{
				match = true;
				break;
			}
			else
			{
				que3.Enqueue(temp + array[2]);
			}
		}

		count++;
		
	}

	cout << "Required number of coins: " << count << endl;

	delete[] array;
	
	//task02
	/* 10 5 2 6 3 8 15 13 14 */
	cout << endl << " **** Task 02 ****" << endl << endl;
	QueType<int> inQue, outQue, TQue;
	int x, cycle = 0;
	cout << "Number of tasks: ";
	cin >> size;
	cout << "Input: ";
	for (int i = 0; i < size; i++) {
		cin >> x;
		inQue.Enqueue(x);
	}

	while (!inQue.IsEmpty()) {
		int count = 0;
		for (int i = 0; i < 3; i++) {
			inQue.Dequeue(x);
			if (x > 5) {
				TQue.Enqueue(x - 5);
				count++;
			}
		}

		while (!inQue.IsEmpty()) {
			inQue.Dequeue(x);
			outQue.Enqueue(x);
		}
		for (int i = 0; i < count; i++) {
			TQue.Dequeue(x);
			outQue.Enqueue(x);
		}
		while (!outQue.IsEmpty()) {
			outQue.Dequeue(x);
			inQue.Enqueue(x);
		}

		cycle++;
	}
	cout << endl << " Output:: " << cycle << " cycles" << endl;
	
	return 0;
}
