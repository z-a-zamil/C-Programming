#ifndef GRAPHTYPE_H_INCLUDED
#define GRAPHTYPE_H_INCLUDED
#include "stacktype.h"
#include "quetype.h"
template<class VertexType>
class GraphType
{
public:
	GraphType();
	GraphType(int maxV);
	~GraphType();
	void MakeEmpty();
	bool IsEmpty();
	bool IsFull();
	void AddVertex(VertexType);
	void AddEdge(VertexType,VertexType, int);
	int WeightIs(VertexType,VertexType);
	void GetToVertices(VertexType,QueType<VertexType>&);
	void ClearMarks();
	void MarkVertex(VertexType);
	bool IsMarked(VertexType);
	
	void DepthFirstSearch(VertexType,VertexType, int& , QueType<VertexType>& );
	void BreadthFirstSearch(VertexType,VertexType, int& , QueType<VertexType>& );
	void StronglyConnect(VertexType, VertexType, bool& );
private:
	int numVertices;
	int maxVertices;
	VertexType* vertices;
	int** edges;
	bool* marks;
};
#endif // GRAPHTYPE_H_INCLUDED