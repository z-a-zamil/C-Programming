#ifndef STACKTYPE_H_INCLUDED
#define STACKTYPE_H_INCLUDED
class FullStack
	// Exception class thrown
	// by Push when stack is full.
{};
class EmptyStack
	// Exception class thrown
	// by Pop and Top when stack is emtpy.
{};
template <class ItemType>
class StackType
{
public:
	StackType();
	StackType(int);
	~StackType();
	bool IsFull();
	bool IsEmpty();
	void Push(ItemType);
	void Pop();
	ItemType Top();
private:
	int top;
	ItemType* item;
	int size;
};
#endif // STACKTYPE_H_INCLUDED