#include <iostream>
#include "stacktype.cpp"
using namespace std;

int main() {
	StackType<int> stk1, stk2, tstk, mystk;
	int id, size;
	
	// task 2 (a)
	cout << "Insert My NSU ID: ";
	cin >> id;
	mystk.Push(id);
	cout << " My NSU ID is  ";
	cout << mystk.Top() << endl << endl;
	mystk.Pop();

	// task 2 (b)
	cout << "Enter number of inputs: ";
	cin >> size;
	cout << "Enter " << size << " NSU ID : ";
	for (int i = 0; i < size; i++) {
		cin >> id;
		tstk.Push(id);
	}
	
	for (int i = 0; i < size; i++) {
		try {
			if (!stk2.IsEmpty()) {
				while (!stk2.IsEmpty()) {
					if (stk2.Top() != tstk.Top()) {
						stk1.Push(stk2.Top());
						stk2.Pop();
					}
					else {
						tstk.Pop();
					}
				}
			}
			else {
				stk2.Push(tstk.Top());
				tstk.Pop();
			}
			while (!stk1.IsEmpty())
			{
				stk2.Push(stk1.Top());
				stk1.Pop();
			}
		}
		catch (EmptyStack) {

		}
	}

	while (!stk2.IsEmpty())
	{
		cout << stk2.Top() << " ";
		stk1.Pop();
	}


	return 0;
}

