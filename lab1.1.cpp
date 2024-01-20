#include<iostream>
using namespace std;
class university
{
	protected:
		char name[20];
		char location[20];
	public:
		university()
		{
			cout<<"enter name and location"<<endl;
			cin>>name>>location;
		}
		void display1()
		{
			cout<<"name="<<name<<endl;
			cout<<"location="<<location<<endl;
		}
};
class affilated_college:virtual public university
{
	protected:
		char name[20];
		char adress[20];
		int no_of_programs;
	public:
		affilate_college()
		{
			cout<<"enter name,adress,no_of_programs"<<endl;
			cin>>name>>adress>>no_of_programs;
		}
		void display2()
		{
			cout<<"name="<<name<<endl;
			cout<<"adress="<<adress<<endl;
			cout<<"no_of_programs="<<no_of_programs<<endl;
				}
		};
class constitutent_college:virtual public university
{
	protected:
		char school[20];
		char dean[20];
		int name_of_program;
	public:
		constituent_college()
		{
			cout<<"enter school,dean,name_of_program"<<endl;
			cin>>school>>dean>>name_of_program;
			}	
			void display3()
			{
				cout<<"school="<<school<<endl;
				cout<<"dean="<<dean<<endl;
				cout<<"name_of_program="<<name_of_program<<endl;
				}	
};
class student:public affilated_college,public constituent_college
{
	protected:
		char name[20];
		char program;
		int enrolled year;
	public:
	university(),affilated college(),constituent college()
	{
		cout<<"enter name,program,enrolled year"<<endl;
		cin>>name>>program>>enrolled year;
			}
	void display4()
	{
		cout<<"name="<<name<<endl;
		cout<<"program="<<program<<endl;
		cout<<"enrolled year="<<enrolled year<<endl;
			}
};
int main()
{ 
student s1();
s1.dispay1();
s2.display2();
s3.display3();
s4.display();
}

}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}


















