#include<iostream>
#include<conio.h>
using namespace std;
class hello
{
	int x,y;
	public:
		hello(){
			cout<<"Lauda_lawsun"<<endl;
		}
		hello(int a)
		{
			x=a;
			cout<<"The number is::"<<x<<endl;
		}
		hello(int a,int b)
		{
			x=a;
			y=b;
			cout<<"The number is::"<<x<<endl;
			cout<<"The number is::"<<y<<endl;
		}
};
int main()
{
	hello h(2,5);
	getch();
	return 0;
	
}
		

