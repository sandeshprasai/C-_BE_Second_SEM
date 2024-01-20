#include<iostream>
using namespace std;

class complex

{
	int real,imaginary;
	public:
		complex()
		{
		real=0;
		imaginary=0;
		}
		
		complex(int real,int imaginary)
		{
				this->real=real;
				this->imaginary=imaginary;	
		}	
				
				void display()
				{
					 cout<<real<<"+i"<<imaginary<<endl;
				}
			
		void operator ++()
		{
				++real;
				++imaginary;
				
		}
		
		complex operator +(complex c)
		{
				c.real=real+c.real;
				c.imaginary=imaginary+c.imaginary;
				return c;
		}
					
};

int main()
{
	complex c1(10,20),c2(20,30);
	c1.display();
	c2.display();
	++c1,++c2;
	cout<<"Incremented Value of two complex Number:"<<endl;
	c1.display();
	c2.display();
	complex c=c1+c2;
	cout<<"Added Complex Number after incrementation:"<<endl;
	c.display();
	
	
}
