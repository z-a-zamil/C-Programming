#ifndef TIMESTAMP_H_INCLUDED
#define TIMESTAMP_H_INCLUDED
const int MAX_ITEM = 5;
template <class ItemType>
class TimeStamp
{
	struct Time {
		int sec, min, hour;
	};
public:
	TimeStamp();
	TimeStamp(int, int, int);
	void MakeEmpty();
	bool IsFull();
	int LengthIs();
	void InsertItem(ItemType, ItemType, ItemType);
	void DeleteItem(ItemType, ItemType, ItemType);
	void RetrieveItem(ItemType&, ItemType&, ItemType&, bool&);
	void ResetList();
	void GetNextItem(ItemType&, ItemType&, ItemType&);
	void Print();	
	bool operator== (TimeStamp&);
	bool operator< (TimeStamp&);
private:
	int length;
	Time info[MAX_ITEM], inf;
	int currentPos;
};
#endif