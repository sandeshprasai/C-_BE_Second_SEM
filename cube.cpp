#include<iostream>
using namespace std;
class largest
{
	int x,y;
	public:
		void setdata(int a,int b)
		{
			x=a;
			y=b;
			calculate();
		}
		void calculate()
		{
			if(x>y)
			{
				cout<<"The largest number is:"<<x<<endl;
			}
			else
			{
				cout<<"The largest number is:"<<y<<endl;
			}
		}
};
int main(void)
{
	largest lr;
	lr.setdata(10,20); 
}
