

#include <iostream>
#include "quetype.cpp"
#define lower 3
#define upper 7
using namespace std;


int random()
{
	srand(time(0));
	return ((rand() % (upper - lower + 1)) + lower);
}

int main() {
	QueType<int> queue1, queue2, tqueue;
	int n, k, x;
	cout << "N: ";
	cin >> n;
	cout << " Enter elements: ";
	for (int i = 0; i < n; i++) {
		cin >> x;
		queue1.Enqueue(x);
	}
	
	k = random();
	// 3 4 5 6 7 8 9 10 1 2
	
	while(!queue1.IsEmpty()) {
		try {
			
			for (int i = 0; i < k; i++) {
				queue1.Dequeue(x);
				queue1.Enqueue(x);
			}
			queue1.Dequeue(x); 

			for (int i = k; i < n; i++) {
				queue1.Dequeue(x);
				queue2.Enqueue(x);
			}
			n -= 1;
			while (!queue1.IsEmpty()) {
				queue1.Dequeue(x);
				queue2.Enqueue(x);
			}
			while (!queue2.IsEmpty()) {
				queue2.Dequeue(x);
				queue1.Enqueue(x);
			}
		}
		catch (EmptyQueue) {

		}
	}

	
	 cout <<"The person in the "<< x << "th position is the winner of the game. " << endl;

	return 0;
}