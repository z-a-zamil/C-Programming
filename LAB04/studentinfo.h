#ifndef STUDENTINFO_H_INCLUDED
#define STUDENTINFO_H_INCLUDED
#include <iostream>
using namespace std;
const int MAX_ITEM = 5;

class StudentInfo
{
	struct Student {
		int id;
		string name;
		float cgpa;
	};
public:
	StudentInfo();
	StudentInfo(int , string , float );
	void MakeEmpty();
	bool IsFull();
	int LengthIs();
	void InsertItem(int, string, float);
	void DeleteItem(int);
	void RetrieveItem(int&, string&, float&, bool&);
	void ResetList();
	void GetNextItem(int&, string&, float&);

	void Print();
	bool operator==(StudentInfo&);
	bool operator<(StudentInfo&);
private:
	int length;
	Student info[MAX_ITEM], inf;
	int currentPos;
};
#endif 