#include"Manage.h"
#include<string>
#include<fstream> 
#include<iostream>
using namespace std;



Manage::Manage() {

}

Manage::~Manage() {

}


void Manage::print() {
	cout << "·������" << endl;  
	cout<<"����������ϻ�ʵϰ"<<endl; 
	for (int a = 0; a<numNodes; a++)
	{
		cout << vexs[a] << "	";
		for (int b = 0; b<numNodes; b++)
		{
			cout << arc[a][b] << "	";
		}
		cout << endl;
	}
}