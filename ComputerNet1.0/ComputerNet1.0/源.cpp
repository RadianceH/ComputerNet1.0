#include<iostream>
#include<string>
using namespace std;

typedef struct EdgeNode//�߱���
{
	int adjvex;   //�洢�ö����Ӧ���±�
	int weight;   //���ڴ洢Ȩֵ
	struct EdgeNode *next;  //����ָ����һ���ڽӵ�
}EdgeNode;

typedef struct VextexNode  //�������
{
	char date;   //�����򣬴洢������Ϣ ip
	EdgeNode *firstNode;//�߱�ͷָ��
}vextexNode,Adjlist[100];

typedef struct
{
	Adjlist adjlist;
	int numNodes, numEdges;//ͼ�е�ǰ�����������
}GraphAdjList;
int main(){}