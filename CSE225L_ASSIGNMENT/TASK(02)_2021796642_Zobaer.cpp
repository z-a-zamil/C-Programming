
#include <iostream>
#include "unsortedtype.cpp"
#include "graphtype.cpp"
using namespace std;

int main() {
	
	cout << endl << "\t * * * TASK_02(1.a) * * *" << endl;

	QueType<char> startq, endq, tq;
	int size, edg;
	cout << " Enter number of nodes : ";
	cin >> size;
	GraphType<char> graph1(size);
	char ch, start, end;
	cout << " Enter " << size << " nodes : ";
	for (int i = 0; i < size; i++) {
		cin >> ch;
		graph1.AddVertex(ch);
		startq.Enqueue(ch);		endq.Enqueue(ch);	
	}
	cout << " Enter number of edges : ";
	cin >> size;
	cout << " Enter " << size << " start node, end node, edge weight : " << endl;
	for (int i = 0; i < size; i++) {
		cin >> start >> end >> edg;
		graph1.AddEdge(start, end, edg);
	}

	bool strongConnect, possible1 = true;
	while (!startq.IsEmpty()) {
		startq.Dequeue(start);
		while (!endq.IsEmpty() && possible1) {
			endq.Dequeue(end);
			tq.Enqueue(end);

			graph1.StronglyConnect(start, end, strongConnect);
			if (!strongConnect)
				possible1 = false;
		}
		while (!tq.IsEmpty())
		{
			tq.Dequeue(ch);
			endq.Enqueue(ch);
		}
	}
	if(possible1)
		cout << endl << " Graph is Strongly connected" << endl;
	else
		cout << endl << " Graph is not Strongly connected" << endl;
	
	

	cout << endl << endl << "\t * * * TASK_02(1.b) * * *" << endl;

	UnsortedType<int> list1;
	int x;
	cout << " Insert 5 integers: ";
	for (int i = 0; i < 5; i++) {
		cin >> x;
		list1.InsertItem(x);
	}

	bool cycle;
	cycle = list1.SearchForCycle();
	if (cycle)
		cout << " Cycle Exist." << endl;
	else
		cout << " Cycle does not Exist." << endl;
	


	cout << endl << "\t * * * TASK_02(2) * * *" << endl;
	int cost1, cost2;
	QueType<char> que1, que2;

	graph1.DepthFirstSearch('D', 'G', cost1, que1);

	graph1.BreadthFirstSearch('D', 'G', cost2, que2);

	cout << " Short Path Cost: " << cost1 << endl;
	cout << " Long Path Cost: " << cost2 << endl;

	if (cost1 < cost2)
		cout << endl << " Short Path is more cost efficient." << endl;
	else
		cout << endl << " Long Path is more cost efficient" << endl;

	cout << endl;

	return 0;
}


/*
		7
		A B C D E F G
		10
		A C 4
		A F 5
		B F 9
		C G 3
		D E 11
		E B 6
		E C 2
		F G 13
		G A 7
		G D 14
	*/