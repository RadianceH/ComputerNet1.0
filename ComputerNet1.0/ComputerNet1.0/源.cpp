#include<iostream>
#include<string>
using namespace std;
#define Maxnum 100
typedef struct gp
{
	int vexs[Maxnum];
	int arc[Maxnum][Maxnum];
	int numNode;
	int numEdge;
};



class Manage
{
private:
	int numNodes;
	int numEdges;
public:
	Manage();
	~Manage();
	void creategraph();
	void readtxt();
	void addNode();
	void delNode();
	void output();
}GraphAdjList;

Manage::creategraph()
{

}
int main(){}