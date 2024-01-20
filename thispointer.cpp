#include<iostream>
using namespace std;

class example
{
	public:
		void display()
		{
			cout<<"Address Of an object is:"<<this;
		}
};

int main()
{
	example e;
	e.display();
	cout<<"\nAddress outside This"<<&e;
}

