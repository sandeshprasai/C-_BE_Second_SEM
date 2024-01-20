#include<iostream>
#include<conio.h>
using namespace std;
class details
{
	private:
		char name[20];
		int num,manu;
		float cost,cost1;
		public:
			void getdata()
			{
				cout<<"Enter the name::"<<endl;
				cin>>name;
				cout<<"Enter the number"<<endl;
				cin>>num;
				cout<<"Enter the manufacture date"<<endl;
				cin>>manu;
				cout<<"Enter the cost of the car"<<endl;
				cin>>cost1;
			}
			void display()
			{
				cout<<"Name="<<name<<endl;
				cout<<"Number="<<num<<endl;
				cout<<"Manufacture date="<<manu<<endl;
				cout<<"Cost="<<cost1<<endl;
			}
			void com( details d1,details d2)
			{
				if(d1.cost1>d2.cost1)
				{
					cost=(cost1-(2/100)*cost1);
					cout<<"The new cost after discount is"<<cost<<endl;
				}
				else
				{
					cost=(cost1-(2/100)*cost1);
					cout<<"The new cost after discount is"<<cost<<endl;
				}
			}
};
int main()
{
	details d1,d2,d3;
	d1.getdata();
	d1.display();
	d2.getdata();
	d2.display();
	d3.com(d1,d2);
	getch();
	return 0;
}
