/*
#include <iostream>
#include "stacktype.cpp"
using namespace std;

int main() {

	StackType<int> stack1, stack2, tStack;

	int N, K, x;

	cout << "N: ";
	cin >> N;
	cout << "Enter " << N << " elements: ";
	for (int i = 0; i < N; i++) {
		cin >> x;
		stack1.Push(x);
	}
	cout << "K: ";
	cin >> K;
	int size = N / K;
	
	for(int j = 0; j < (size * K); j++) {
		try {
			for (int i = 0; i < K; i++)
			{
				tStack.Push(stack1.Top());
				stack1.Pop();
			}
			while (!tStack.IsEmpty())
			{
				stack2.Push(tStack.Top());
				tStack.Pop();
			}
		}
		catch (EmptyStack) {

		}
	}
	while (!stack1.IsEmpty()) {
		try {
			tStack.Push(stack1.Top());
			stack1.Pop();
		}
		catch (EmptyStack) {

		}	
	}
	while (!tStack.IsEmpty())
	{
		stack2.Push(tStack.Top());
		tStack.Pop();
	}

	while (!stack2.IsEmpty())
	{
		cout << stack2.Top() << " ";
		stack2.Pop();
	}


	return 0;
}
*/