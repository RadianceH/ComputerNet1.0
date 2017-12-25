#include<iostream>
#include<string>
using namespace std;
#define Maxnum 100



class Manage
{
private:
	int vexs[Maxnum];
	int arc[Maxnum][Maxnum];
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