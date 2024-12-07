#include <iostream>
#include "timeStamp.cpp"
using namespace std;

int main() {
	TimeStamp<int> t1(15, 34, 02);
	TimeStamp<int> t3(30, 25, 20);
	if (t1 == t3) {
		cout << "t1 equal t3" << endl;
	}
	else {
		cout << "t1 Not equal t3" << endl;
		if (t1 < t3) {
			cout << "t1 smaller than t3" << endl;
		}
		else {
			cout << "t1 bigger than t3" << endl;
		}
	}
	

	TimeStamp<int> sec, time;
	int s, m, hRem,h; 
	bool bb;
		
	cout << "Input timetamps:" << endl;
	for (int i = 0; i < 5; i++) {
		cin >> s >> m >> h;
		time.InsertItem(s, m, h);
		s = s + (m * 60) + (h * 3600);
		sec.InsertItem(s);
	}
	
	cout << endl << "Sorting for whole time (hour base sort): " << endl;
	sec.ResetList();
	sec.Print();
	cout << endl << "Sorting for whole time (sec base sort): " << endl;
	time.ResetList();
	time.print();

	cout << endl << "Enter timestamp to Delete (ss mm hh):"<< endl;
	cin >> s >> m >> h;
	s = s + (m * 60) + (h * 3600);
	sec.RetrieveItem(s,bb);
	if (bb) {
		sec.DeleteItem(s);
		cout << "Delete Successful" << endl;
	}
	else {
		cout << " Delete Not Successful." << endl;
	}

	cout << endl << "Sorting for whole time after delete (Hour sorting): " << endl;
	sec.ResetList();
	sec.Print();
	
	return 0;
}


