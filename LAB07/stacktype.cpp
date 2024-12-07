#include "stacktype.h"
template <class ItemType>
StackType<ItemType>::StackType()
{
	top = -1;
	size = 5;
	item = new ItemType[size];
}
template <class ItemType>
StackType<ItemType>::StackType(int s)
{
	top = -1;
	size = s;
	item = new ItemType[size];
}
template <class ItemType>
StackType<ItemType>::~StackType()
{
	delete[] item;
}
template <class ItemType>
bool StackType<ItemType>::IsEmpty()
{
	return (top == -1);
}
template <class ItemType>
bool StackType<ItemType>::IsFull()
{
	return (top == size - 1);
}
template <class ItemType>
void StackType<ItemType>::Push(ItemType newItem)
{
	if (IsFull()) throw FullStack();
	top++;
	item[top] = newItem;
}
template <class ItemType>
void StackType<ItemType>::Pop()
{
	if (IsEmpty()) throw EmptyStack();
	top--;
}
template <class ItemType>
ItemType StackType<ItemType>::Top()
{
	if (IsEmpty()) throw EmptyStack();
	return item[top];
}