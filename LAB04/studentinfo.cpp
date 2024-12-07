#include "studentinfo.h"
#include <iostream>
using namespace std;
StudentInfo::StudentInfo()
{
	length = 0;
	currentPos = -1;
}
StudentInfo::StudentInfo(int id, string name, float cgpa)
{
	inf.id = id;
	inf.name = name;
	inf.cgpa = cgpa;
	length = 0;
	currentPos = -1;
}
void StudentInfo::MakeEmpty()
{
	length = 0;
}
bool StudentInfo::IsFull()
{
	return (length == MAX_ITEM);
}
int StudentInfo::LengthIs()
{
	return length;
}
void StudentInfo::ResetList()
{
	currentPos = -1;
}
void StudentInfo::GetNextItem(int& id, string& name, float& cgpa)
{
	currentPos++;
	id = info[currentPos].id;
	name = info[currentPos].name;
	cgpa = info[currentPos].cgpa;
}
void StudentInfo::RetrieveItem(int& id, string& name, float& cgpa, bool& bb)
{
	int location = 0;
	bool moreToSearch = (location < length);
	bb = false;
	while (moreToSearch && !bb)
	{
		if (id == info[location].id)
		{
			bb = true;
			id = info[location].id;
			name = info[location].name;
			cgpa = info[location].cgpa;
		}
		else
		{
			location++;
			moreToSearch = (location < length);
		}
	}
}
void StudentInfo::InsertItem(int id, string name, float cgpa)
{
	info[length].id = id;
	info[length].name = name;
	info[length].cgpa = cgpa;
	length++;
}
void StudentInfo::DeleteItem(int id)
{
	int location = 0;
	while (id != info[location].id)
		location++;
	info[location].id = info[length - 1].id;
	info[location].name = info[length - 1].name;
	info[location].cgpa = info[length - 1].cgpa;
	length--;
}
void StudentInfo::Print() {
	int id; 	string name;	float cgpa;
	for (int i = 0; i < LengthIs(); i++) {
		GetNextItem(id, name, cgpa);
		cout << id << ", " << name << ", " << cgpa << endl;
	}
}
bool StudentInfo::operator== (StudentInfo& st) {
	if (inf.cgpa == st.inf.cgpa)
		return true;
	else
		return false;
}
bool StudentInfo::operator< (StudentInfo& st) {
	if (inf.cgpa < st.inf.cgpa)
		return true;
	else
		return false;
}