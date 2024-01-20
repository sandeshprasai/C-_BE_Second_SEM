#include<iostream>
#include<conio.h>
using namespace std;
class lawsun;
class lauda
{
	private:
		int a;
		public:
		  void muj(int c)
		{
				a=c;
				cout<<"The first number is::"<<a<<endl;
		}
		friend void bhosdike(lauda,lawsun);
};
class lawsun
{
	private:
	    int b;	
		public:
		void muj(int d)
		{
			b=d;
			cout<<"The second number is::"<<b<<endl;
		}
		friend void bhosdike(lauda,lawsun);
};
void bhosdike(lauda x,lawsun y)
{
	int z=0;
	z=x.a+y.b;
	cout<<"The sum of the two number is::"<<z<<endl;
}
int main()
{
	lauda ld;
	ld.muj(6);
	lawsun ls;
	ls.muj(4);
	bhosdike(ld,ls);
	getch();
	return 0;
}
