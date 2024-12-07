#include<iostream>
#include<string.h>
using namespace std;


int main() {
/*
	// ********* TASK_01 *********
	cout << "\t\t***** Task_01 *****" << endl << endl;

	int size;
	cout << "Enter array size: ";
	cin >> size;
	int* arr = new int[size];
	cout << endl;
	for (int i = 0; i < size; i++) {
		cout << "Enter element of index [" << i << "]: ";
		cin>>arr[i];
	}
	cout << endl;
	cout << "\t Output_TASK_01" << endl << endl;
	for (int i = 0; i < size; i++) {
		cout << arr[i] << "  ";
	}
	cout << endl << endl;
	
	delete[] arr;
	
	
	*/


	// ********* TASK_02 *********
	cout << "\t\t***** Task_02 *****" << endl << endl;

	int r, c;
	cout << "Enter size of row: " ;
	cin >> r;
	cout << "Enter size of column: ";
	cin >> c;
	char** carr = new char* [r];

	for (int i = 0; i < r;i++) {
		carr[i] = new char[c];
	}

	for (int i = 0; i < r; i++) {
		cout << "Enter a character string for [" << i << "]: ";
		for (int j = 0; j < c; j++) {
			cin >> carr[i][j];
		}
	}
	cout << endl;
	cout << "\t Output_TASK_02 " << endl << endl;
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			cout << carr[i][j];
		}
		cout << endl;
	}

	cout << endl << endl;

	for (int i = 0; i < r; i++) {
		delete[] carr[i];
	}

	delete[] carr;
	


	/*

	// ********* TASK_03 *********
	cout << "\t\t***** Task_03 *****" << endl << endl;
	int row, col;
	cout << "Enter size of row: " ;
	cin >> r;
	int** inarr = new int* [r];
	int recC[100];

	for (int i = 0; i < r;i++) {
		cout << "Enter size of column: ";
		cin >> c;
		recC[i] = c;
		inarr[i] = new int[c];
		for (int j = 0; j < c; j++) {
			cout << "Enter element of [" << i << "][" << j << "]: ";
			cin >> inarr[i][j];
		}
	}
	cout << endl;
	cout << "\t Output_TASK_03 " << endl << endl;
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < recC[i]; j++) {
			cout << inarr[i][j] << " ";
		}
		cout << endl;
	}

	for (int i = 0; i < r; i++) {
		delete[] inarr[i];
	}

	delete[] inarr;
	*/
	return 0;
}