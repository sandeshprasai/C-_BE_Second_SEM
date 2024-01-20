#include<iostream>
using namespace std;
class movie
{
	protected:
		char name[20];
		float budget;
		public:
			void get_name()
			{
				cout<<"Enter the name of the movie::"<<endl;
				cin.getline(name,20);
				cout<<"The movie name is::"<<name<<endl;
			}
			void get_budget()
			{
				cout<<"Enter the budget of the movie"<<endl;
				cin>>budget;
				cout<<"The total budget of the movie is::"<<budget<<endl;
			}
};
class hollywood:public virtual movie
{
	protected:
		char cast1[20];
		float IMDB1,income1;
		public:
			void get_cast1()
			{
				cout<<"Enter the name of the cast::"<<endl;
				cin>>cast1;
				cout<<"The cast name of the hollywood movie is::"<<cast1<<endl;
			}
			void get_imdb(int x)
			{
				IMDB1=x;
				cout<<"The total imdb rate of hollywood is::"<<IMDB1<<endl;
				
			}
			void get_income1(float a)
			{
				income1=a;
				cout<<"The total income of hollywood is::"<<income1<<endl;
			}
};
class bollywood:public virtual movie
{
	protected:
		char cast2[20];
		float IMDB2,income2;
		public:
			void get_cast2()
			{
			cout<<"Enter the name of the cast::"<<endl;
			cin>>cast2;
			cout<<"The movie name is::"<<cast2<<endl;
			}
			void get_imdb2(int b)
			{
				IMDB2=b;
				cout<<"The total imdb rate of bollywood is::"<<IMDB2<<endl;
			}
			void get_income2(int c)
			{
				income2=c;
				cout<<"The total income of bollywood is::"<<income2<<endl;
			}
};
class box_office: public hollywood,public bollywood
{
	protected:
		float T_income;
		public:
			void get_comp()
			{
				if(IMDB1>IMDB2)
				{
					cout<<"The hollywood film are good!!"<<endl;
				}
				else
				{
					cout<<"The bollywood film are good!!"<<endl;
				}
			}
			void get_total()
			{
				T_income=income1+income2;
				cout<<"The total income is::"<<T_income<<endl;
			}
};
int main()
{
	box_office b;
	b.get_name();
	b.get_budget();
	b.get_cast1();
	b.get_cast2();
	b.get_imdb(3.1);
	b.get_income1(250.0);
	b.get_imdb(2.1);
	b.get_income2(200.0);
}
