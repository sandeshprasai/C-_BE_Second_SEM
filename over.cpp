#include<iostream>
#include<conio.h>
using namespace std;
class hello
{
	int x,y;
	public:
		hello();
		hello(int a);
		hello(int a,int b);
};
hello::hello()
{
	cout<<"Lauda_lawsun"<<endl;
}
hello::hello(int a)
{
	x=a;
	cout<<"The number is::"<<x<<endl;
}
hello::hello(int a,int b)
{
	x=a;
	y=b;
	cout<<"The number is::"<<x<<endl;
	cout<<"The number is::"<<y<<endl;
}
int main()
{
	hello h;
	hello(2,1);
	getch();
	return 0;
}
