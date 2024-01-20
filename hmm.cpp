#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
class hello
{
	private:
		char n[20];
		public:
			void get(char a[])
			{
				strcpy(n,a);
				cout<<"The name is::"<<n<<endl;
			}
};
int main()
{
	hello h;
	h.get("Shaurab");
	getch();
	return 0;
}
