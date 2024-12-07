#include<iostream>
#include "unsortedtype.cpp"
using namespace std;

int main() {
	UnsortedType<int> list1, list2, list3;
	int m, n, val1, val2;
	cout << "Input values: " << endl;
	cin >> m;
	for (int i = 0; i < m; i++) {
		cin >> val1;
		list1.InsertItem(val1);
	}
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> val2;
		list2.InsertItem(val2);
	}
	list1.ResetList();		list2.ResetList();
	int i, j;
	list1.GetNextItem(val1);
	list2.GetNextItem(val2);
	
	for (i = 0, j = 0; (i < m && j < n); ) {
		if (val1 >= val2) {
			list3.InsertItem(val1);
			i++;
			if (i < m) {
				list1.GetNextItem(val1);
			}
		}
		else {
			list3.InsertItem(val2);
			j++;
			if (j < n) {
				list2.GetNextItem(val2);
			}
		}
	}
	while (i < list1.LengthIs())
	{
		list3.InsertItem(val1);
		i++;
		if (i < list1.LengthIs()) {
			list1.GetNextItem(val1);
		}
	}
	while (j < list2.LengthIs())
	{
		list3.InsertItem(val2);
		j++;
		if (j < list2.LengthIs()) {
			list2.GetNextItem(val2);
		}
	}
	list3.ResetList();
	int size = list3.LengthIs();
	cout << endl << "Output:" << endl;
	for (int i = 0; i < size; i++) {
		list3.GetNextItem(val1);
		cout << val1 << " ";
	}
	cout << endl;
	return 0;
}