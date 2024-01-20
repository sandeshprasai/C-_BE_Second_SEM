#include<iostream>
using namespace std;

class base
{
	public:
		virtual void show()=0;
};
class derived1:public base
{
	public:
		void show()
		{
			cout<<"Pure Vortual Show Derived1"<<endl;
		}
};

class derived2:public derived1
{
	public:
		void show()
		{
			cout<<"Pure Virtual Derived 2"<<endl;
		}
 } ;
 
 int main()
 {
 	derived1 d1;
 	derived2 d2;
 	base *bptr;
 	bptr=&d1;
 	bptr->show();
 	bptr=&d2;
 	bptr->show();
 	
 }
