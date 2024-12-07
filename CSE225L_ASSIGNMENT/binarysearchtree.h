#ifndef BINARYSEARCHTREE_H_INCLUDED
#define BINARYSEARCHTREE_H_INCLUDED
#include "quetype.h"
#include "stacktype.h"
struct Node
{
	int info;
	Node* left;
	Node* right;
};
template <class ItemType>
struct TreeNode
{
	ItemType info;
	TreeNode* left;
	TreeNode* right;
};
enum OrderType {
	PRE_ORDER, IN_ORDER,
	POST_ORDER
};
template <class ItemType>
class TreeType
{
public:
	TreeType();
	~TreeType();
	void MakeEmpty();
	bool IsEmpty();
	bool IsFull();
	int LengthIs();
	int Height();
	void RetrieveItem(ItemType& item,bool& found);
	void InsertItem(ItemType item);
	void DeleteItem(ItemType item);
	void ResetTree(OrderType order);
	void GetNextItem(ItemType& item, OrderType order, bool& finished);
	void Print();


	int CountLeaveNodes();
	void PrintByLevel();
private:
	TreeNode<ItemType>* root; 
	QueType<ItemType> preQue;
	QueType<ItemType> inQue;
	QueType<ItemType> postQue;
	StackType<TreeNode<ItemType>*> levelStack;
};
#endif // BINARYSEARCHTREE_H_INCLUDED