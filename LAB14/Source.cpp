#include <iostream>
#include "pqtype.cpp"
using namespace std;

int main() {
	
	PQType<int> pq1(15);
	int x;

	if (pq1.IsEmpty())
		cout << "Queue is empty." << endl;
	else
		cout << "Queue is not empty." << endl;
	cout << "Enter 10 items: ";
	for (int i = 0; i < 10; i++) {
		cin >> x;
		pq1.Enqueue(x);
	}

	if (pq1.IsEmpty())
		cout << "Queue is empty." << endl;
	else
		cout << "Queue is not empty." << endl;

	pq1.Dequeue(x);
	cout << x << endl;
	pq1.Dequeue(x);
	cout << x << endl;
	

	int N, K, Y, sum = 0;
	cout << endl << "Enter number of bags: ";
	cin >> N;
	cout << "Enter number of minutes: ";
	cin >> K;
	PQType<int> pq2(N);

	cout << "Enter number of candies in " << N << " bags: ";
	for (int i = 0; i < N; i++) {
		cin >> Y;
		pq2.Enqueue(Y);
	}

	for (int i = 0; i < K; i++) {
		pq2.Dequeue(x);
		sum += x;
		pq2.Enqueue(x / 2);
	}

	cout << endl << "Maximum candies I can eat is " << sum << endl;
	return 0;
}