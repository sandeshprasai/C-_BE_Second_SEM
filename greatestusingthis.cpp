#include<iostream>
using namespace std;

class maximum
{
	int x;
	public:
		void input()
		{
			cout<<"Enter X:"<<endl;
			cin>>x;
			
		}
		void display()
		{
			cout<<"\n X= "<<x<<endl;
		}
		maximum max (maximum m)
		{
			if(x>m.x)
			{
				return *this;
			}
			else
			{
				return m;
			}
		}
};

int main()
{
	maximum m1,m2,m;
	m1.input();
	m2.input();
	m=m2.max(m1);
	m1.display();
	m2.display();
	cout<<"Greatest number is:"<<endl;
	m.display();	
}
