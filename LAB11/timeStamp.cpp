#include "timestamp.h"
#include <iostream>
#include <sstream>
using namespace std;
template <class ItemType>
TimeStamp<ItemType>::TimeStamp()
{
	length = 0;
	listData = NULL;
	currentPos = NULL;
}
template <class ItemType>
TimeStamp<ItemType>::TimeStamp(ItemType s, ItemType m, ItemType h)
{
	length = 0;
	listData = NULL;
	currentPos = NULL;
	second = s;
	minute = m;
	hour = h;
}
template <class ItemType>
int TimeStamp<ItemType>::LengthIs()
{
	return length;
}
template<class ItemType>
bool TimeStamp<ItemType>::IsFull()
{
	NodeType* location;
	try
	{
		location = new NodeType;
		delete location;
		return false;
	}
	catch (bad_alloc& exception)
	{
		return true;
	}
}
template <class ItemType>
void TimeStamp<ItemType>::InsertItem(ItemType item)
{
	NodeType* newNode;
	NodeType* predLoc;
	NodeType* location;
	bool moreToSearch;
	location = listData;
	predLoc = NULL;
	moreToSearch = (location != NULL);
	while (moreToSearch)
	{
		if (location->info < item)
		{
			predLoc = location;
			location = location->next;
			moreToSearch = (location != NULL);
		}
		else moreToSearch = false;
	}
	newNode = new NodeType;
	newNode->info = item;
	if (predLoc == NULL)
	{
		newNode->next = listData;
		listData = newNode;
	}
	else
	{
		newNode->next = location;
		predLoc->next = newNode;
	}
	length++;
}
template <class ItemType>
void TimeStamp<ItemType>::InsertItem(ItemType item, ItemType item1, ItemType item2)
{
	NodeType* newNode;
	NodeType* predLoc;
	NodeType* location;
	bool moreToSearch;
	location = listData;
	predLoc = NULL;
	moreToSearch = (location != NULL);
	while (moreToSearch)
	{
		if (location->info < item)
		{
			predLoc = location;
			location = location->next;
			moreToSearch = (location != NULL);
		}
		else moreToSearch = false;
	}
	newNode = new NodeType;
	newNode->info = item;
	newNode->info1 = item1;
	newNode->info2 = item2;
	if (predLoc == NULL)
	{
		newNode->next = listData;
		listData = newNode;
	}
	else
	{
		newNode->next = location;
		predLoc->next = newNode;
	}
	length++;
}
template <class ItemType>
void TimeStamp<ItemType>::DeleteItem(ItemType item)
{
	NodeType* location = listData;
	NodeType* tempLocation;
	if (item == listData->info)
	{
		tempLocation = location;
		listData = listData->next;
	}
	else
	{
		while (!(item == (location->next)->info))
			location = location->next;
		tempLocation = location->next;
		location->next = (location->next)->next;
	}
	delete tempLocation;
	length--;
}
template <class ItemType>
void TimeStamp<ItemType>::RetrieveItem(ItemType& item, bool& found)
{
	NodeType* location = listData;
	bool moreToSearch = (location != NULL);
	found = false;
	while (moreToSearch && !found)
	{
		if (item == location->info)
			found = true;
		else if (item > location->info)
		{
			location = location->next;
			moreToSearch = (location != NULL);
		}
		else
			moreToSearch = false;
	}
}
template <class ItemType>
void TimeStamp<ItemType>::MakeEmpty()
{
	NodeType* tempPtr;
	while (listData != NULL)
	{
		tempPtr = listData;
		listData = listData->next;
		delete tempPtr;
	}
	length = 0;
}
template <class ItemType>
TimeStamp<ItemType>::~TimeStamp()
{
	MakeEmpty();
}
template <class ItemType>
void TimeStamp<ItemType>::ResetList()
{
	currentPos = NULL;
}
template <class ItemType>
void TimeStamp<ItemType>::GetNextItem(ItemType& item)
{
	if (currentPos == NULL)
		currentPos = listData;
	else
		currentPos = currentPos->next;
	item = currentPos->info;
}
template <class ItemType>
void TimeStamp<ItemType>::GetNextItem(ItemType& item, ItemType& item1, ItemType& item2)
{
	if (currentPos == NULL)
		currentPos = listData;
	else
		currentPos = currentPos->next;
	item = currentPos->info;
	item1 = currentPos->info1;
	item2 = currentPos->info2;
}
template <class ItemType>
void TimeStamp<ItemType>::Print() 
{
	ItemType s, m, hRem, h;
	for (int i = 0; i < LengthIs(); i++) {
		GetNextItem(s);
		h = s / 3600;
		hRem = s - (h * 3600);
		m = hRem / 60;
		s = hRem - (m * 60);
		cout << s << " : " << m << " : " << h << endl;
	}
}
template <class ItemType>
void TimeStamp<ItemType>::print() 
{
	ItemType s, m, h;
	for (int i = 0; i < LengthIs(); i++) {
		GetNextItem(s,m,h);
		cout << s << " : " << m << " : " << h << endl;
	}
}
template <class ItemType>
bool TimeStamp<ItemType>::operator==(TimeStamp time) {
	if (second == time.second && minute == time.minute && hour == time.hour)	
		return true;
	else
		return false;
}
template <class ItemType>
bool TimeStamp<ItemType>::operator< (TimeStamp time) {
	if (second < time.second && minute < time.minute && hour < time.hour)
		return true;
	else
		return false;
}