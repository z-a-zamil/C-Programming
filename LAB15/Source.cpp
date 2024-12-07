#include <iostream>
#include "graphtype.cpp"
using namespace std;

int main() {
/*
8
A B C D E F G H
10
A B 1
B A 1
A C 1
A D 1
D A 1
D E 1
D G 1
G F 1
F H 1
H E 1
*/
	int size, edg ;
	cout << "Enter number of nodes : ";
	cin >> size;
	GraphType<char> grp(size);
	char ch, start, end;
	cout << "Enter " << size << " nodes : ";
	for (int i = 0; i < size; i++) {
		cin >> ch;
		grp.AddVertex(ch);
	}

	cout << "Enter number of edges : ";
	cin >> size;
	cout << "Enter " << size << " start node, end node, edge weight : " << endl;
	for (int i = 0; i < size; i++) {
		cin >> start >> end >> edg;
		grp.AddEdge(start, end, edg);
	}
	
	cout << endl;
	cout <<"OutDegree of the vertex D: " << grp.OutDegree('D') << endl;

	cout << endl;
	bool found = grp.FoundEdge('A', 'D');
	if (found)
		cout << "There is An edge between A and D. " << endl;
	else
		cout << "There is No edge between A and D. " << endl;

	found = grp.FoundEdge('B', 'D');
	if (found)
		cout << "There is An edge between B and D. " << endl;
	else
		cout << "There is No edge between B and D. " << endl;

	cout << endl;
	cout << " Using Depth First Search\n Path between B and E: ";
	grp.DepthFirstSearch('B', 'E');
	cout << "Path between E and B: ";
	grp.DepthFirstSearch('E', 'B');
	
	cout << endl;
	cout << " Using Breadth First Search \n Path between B and E: ";
	grp.BreadthFirstSearch('B', 'E');	

	cout << "Path between E and B: ";
	grp.BreadthFirstSearch('E', 'B');	

	return 0;
}