#include<iostream>
using namespace std;

class emoloyee{

char name[20],address[20];
int roll;

public:
void input()
{
 cout<<"Enter Name: "<<endl;
 cin>>name;
 cout<<"Enter Address: ";
 cin>>address;
 cout<<"Enter roll: ";
 cin>>roll;
}

void output()
{
    cout<<"Name is : "<<name<<endl;
    cout<<"Address is: "<<address<<endl;
    cout<<"Roll No is: "<<roll<<endl;
}
};

int main()
{
    emoloyee e;     //class)name object name;
    e.input();
    e.output();
}