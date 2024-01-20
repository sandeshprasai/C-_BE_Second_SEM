#include<iostream>
using namespace std;

class base
{
	public:
		void show()
		{
			cout<<"Non Virtual Base:"<<endl;
		}
		virtual void display()
		{
			cout<<"Base Class:"<<endl;
		}
};

class derived1:public base
{
	public:
		void show()
		{
			cout<<"Non Virtual Derived 1:"<<endl;
		}
		void display()
		{
		cout<<"Derived Class-1"<<endl;
		}
};

class derived2:public derived1
{
	public:
		void show()
		{
			cout<<"Non Virtual derived2:"<<endl;
		}
		void display()
		{
			cout<<"Derived class-2"<<endl;
		}
};

int main()
{
	base b;
	derived1 d;
	derived2 d2;
	base *bptr;
	bptr=&b;
	bptr->display();
	bptr->show();
	
	bptr=&d;
	bptr->display();
	bptr->show();
	
	bptr= &d2;
	bptr->display();
	bptr->show();
	
}
