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
	void readtxt();
	void delNode();
	void shortest(int v);
};

