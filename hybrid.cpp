#include<iostream>
using namespace std;
class student
{
	protected:
		int roll_number;
		public:
			void get_number(int x)
				{roll_number=x;}
			void put_number()
				{cout<<"Rollno:"<<roll_number<<"\n";}
			
};
class test:virtual public student{
	protected:
		float part1,part2;
		public:
			void get_marks(float x,float y)
			{ part1=x; part2=y;}
			void put_marks
			{
				cout<<"Marks obtained="<<"\n";
				cout<<"part1="<<part1<<"\n";
				cout<<"part2="<<part2<<"\n";
			}
			
};
class sports:public virtual student{
	protected:
		float score;
		public:
			void get_score(float s)
			{score=s;}
			void put_score()
			{cout<<"sports wt:"<<score;}
		};
class result:public test public result
	{
		float total;
		public:
		void display();
	};
	void result::display()
	{
		total=part1+part2+score;
		put_number();
		put_marks();
		put_score();
		cout<<"\n Total score:"<<total<<"\n";
	}
int main()
{
	result st1;
	st1.get_number(678);
	st1.get_marks(35.5,36.5);
	st1.get_score(7.2);
	st1.display();
	return 0;
}
