#include<iostream>
#include<string.h>
using namespace std;
class string1
{
	char name[20];
	public:
		void getstr(char name[])
		{
				strcpy(this->name,name);
		}
		char *retname()
		{
			
			return name;
		}
};

class string2
{
	char address[20];
	public:
		void getadd( char address[])
		{
			strcpy(this->address,address);
		}
		
		char *retadd()
		{
			
			return address;
		}
};
	
	class concinatae
	{
		string1 s1;
		string2 s2;
		public:
			void assign(char name[] , char address[] )
			{
					s1.getstr(name);
					s2.getadd(address);
			}
			void display()
			{
				cout<<"Concanitated String:\n"<<strcat(s1.retname(),s2.retadd());
			}
	};

int main()
{
	string1 s1;
	string2 s2;
	concinatae c;
	c.assign("Sandesh","Jhapa");
	c.display();
	return 0;
}
