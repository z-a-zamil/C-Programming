#ifndef TIMESTAMP_H_INCLUDED
#define TIMESTAMP_H_INCLUDED
#include <sstream>
template <class ItemType>
class TimeStamp
{
	struct NodeType
	{
		ItemType info, info1, info2;;
		NodeType* next;
	};
public:
	TimeStamp();
	TimeStamp(ItemType, ItemType, ItemType);
	~TimeStamp();
	bool IsFull();
	int LengthIs();
	void MakeEmpty();
	void RetrieveItem(ItemType&, bool&);
	void InsertItem(ItemType);
	void InsertItem(ItemType, ItemType, ItemType);		// overloaded InsertItem fuction
	void DeleteItem(ItemType);
	void ResetList();
	void GetNextItem(ItemType&);
	void GetNextItem(ItemType&, ItemType&, ItemType&);		// overloaded GetNextItem function
	
	void Print();		// print hour base sorted linked list
	void print();		// print sec base sorted linked list
	bool operator==(TimeStamp);
	bool operator<(TimeStamp);
private:
	NodeType* listData ;
	int length ;
	NodeType* currentPos ;
	ItemType second, minute, hour;
};

#endif 
