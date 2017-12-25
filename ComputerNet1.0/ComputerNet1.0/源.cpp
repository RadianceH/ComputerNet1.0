#include<iostream>
#include<string>
using namespace std;

typedef struct EdgeNode//边表结点
{
	int adjvex;   //存储该顶点对应的下标
	int weight;   //用于存储权值
	struct EdgeNode *next;  //链域，指向下一个邻接点
}EdgeNode;

typedef struct VextexNode  //顶点表结点
{
	char date;   //顶点域，存储顶点信息 ip
	EdgeNode *firstNode;//边表头指针
}vextexNode,Adjlist[100];

typedef struct
{
	Adjlist adjlist;
	int numNodes, numEdges;//图中当前顶点数与边数
}GraphAdjList;
int main(){}