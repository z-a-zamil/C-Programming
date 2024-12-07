#include "timestamp.h"
#include <iostream>
using namespace std;
template <class ItemType>
TimeStamp<ItemType>::TimeStamp()
{
	length = 0;
	currentPos = -1;
}
template <class ItemType>
TimeStamp<ItemType>::TimeStamp(int s, int m, int h)
{
	length = 0;
	currentPos = -1;
	inf.sec = s;
	inf.min = m;
	inf.hour = h;
}
template <class ItemType>
void TimeStamp<ItemType>::MakeEmpty()
{
	length = 0;
}
template <class ItemType>
bool TimeStamp<ItemType>::IsFull()
{
	return (length == MAX_ITEM);
}
template <class ItemType>
int TimeStamp<ItemType>::LengthIs()
{
	return length;
}
template <class ItemType>
void TimeStamp<ItemType>::ResetList()
{
	currentPos = -1;
}
template <class ItemType>
void TimeStamp<ItemType>::GetNextItem(ItemType& s, ItemType& m, ItemType& h)
{
	currentPos++;
	s = info[currentPos].sec;
	m = info[currentPos].min;
	h = info[currentPos].hour;
}
template <class ItemType>
void TimeStamp<ItemType>::InsertItem(ItemType s, ItemType m, ItemType h)
{
	int location = 0;
	bool moreToSearch = (location < length);
	while (moreToSearch)
	{
		if (s > info[location].sec)
		{
			location++;
			moreToSearch = (location < length);
		}
		else if (s < info[location].sec)
			moreToSearch = false;
	}
	for (int index = length; index > location; index--) {
		info[index].sec = info[index - 1].sec;
		info[index].min = info[index - 1].min;
		info[index].hour = info[index - 1].hour;
	}
	info[location].sec = s;
	info[location].min = m;
	info[location].hour = h;
	length++;
	currentPos = location;
}
template <class ItemType>
void TimeStamp<ItemType>::DeleteItem(ItemType s, ItemType m, ItemType h)
{
	int location = 0;
	while ((s != info[location].sec) && (m != info[location].min) && (h != info[location].hour))
		location++;
	for (int index = location + 1; index < length; index++) {
		info[index - 1].sec = info[index].sec;
		info[index - 1].min = info[index].min;
		info[index - 1].hour = info[index].hour;
	}
	length--;
}
template <class ItemType>
void TimeStamp<ItemType>::RetrieveItem(ItemType& s, ItemType& m, ItemType& h, bool& found)
{
	int midPoint, first = 0, last = length - 1;
	bool moreToSearch = (first <= last);
	found = false;
	while (moreToSearch && !found)
	{
		midPoint = (first + last) / 2;
		if (s < info[midPoint].sec)
		{
			last = midPoint - 1;
			moreToSearch = (first <= last);
		}
		else if (s > info[midPoint].sec)
		{
			first = midPoint + 1;
			moreToSearch = (first <= last);
		}
		else
		{
			found = true;
			s = info[midPoint].sec;
			m = info[midPoint].min;
			h = info[midPoint].hour;
		}
	}
}
template <class ItemType>
void TimeStamp<ItemType>::Print() {
	int s, m, h;
	for (int i = 0; i < LengthIs(); i++) {
		GetNextItem(s, m, h);
		cout << s << " " << m << " " << h << endl;
	}
}
template <class ItemType>
bool TimeStamp<ItemType>::operator== (TimeStamp& time) {
	if ((inf.sec == time.inf.sec) && (inf.min == time.inf.min) && (inf.hour == time.inf.hour))
		return true;
	else
		return false;
}
template <class ItemType>
bool TimeStamp<ItemType>::operator< (TimeStamp& time) {
	if ((inf.sec < time.inf.sec) && (inf.min < time.inf.min) && (inf.hour < time.inf.hour))
		return true;
	else
		return false;
}