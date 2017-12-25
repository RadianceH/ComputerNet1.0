#include<iostream>
using namespace std;

typedef struct EdgeNode
{
	int adjvex;
	int weight;
	struct EdgeNode *next;
}EdgeNode;

typedef struct VextexNode
{
	char date;
	EdgeNode *firstNode;
}vextexNode,Adjlist[100];

typedef struct
{
	Adjlist adjlist;
	int numNodes, numEdges;
}GraphAdjList;
int main(){}