/*

#include <iostream>
using namespace std;
int recurs(int x) {
	if (x == 0)
		return 3;
	else if (x == 1)
		return 1;
	else if (x == 2)
		return 3;
	else
		return (recurs(x-3) + recurs(x-2) + recurs(x-1));
}
int main() {
	int size;
	cout << " Enter an integer: ";
	cin >> size;
	cout << endl << endl;
	for (int i = 0; i < size; i++) {
		int x = recurs(i);
		cout << x << " ";
	}
	cout << endl;
	return 0;
}

*/