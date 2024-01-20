#include<iostream>
#include<conio.h>
using namespace std;
class lauda
{
	private: 
	int i,j,add1=0,add2=0;
	public:
		lauda()
		{
		}
		lauda(int x,int y)
		{
			i=x;
			j=y;
			cout<<"The real part is::"<<i<<endl;
			cout<<"The imaginary part is::"<<j<<endl;
		}

		void chod(lauda h1,lauda h2 )
		{
			add1=h1.i+h2.i;
			cout<<"The sum of the real part is::"<<add1<<endl;
			add2=h1.j+h2.j;
			cout<<"The sum of the imag part is::"<<add2<<endl;
		}
};
int main()
{
	lauda h1(5,6);
	lauda h2(2,3);
	lauda h3;
	h3.chod(h1,h2);
	getch();
	return 0;
}
