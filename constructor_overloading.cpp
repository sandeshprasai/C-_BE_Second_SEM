#include <iostream>
using namespace std;

class student
{

private:
    string name;

public:
    student()
    {
        name = "unknown";
    }
    student(string st)
    {
        name = st;
    }

    void displaydata()
    {

        cout <<"Entered Name was: "<<name<<endl;
    }
};

int main()
{
    string st;
    cout<<"Enter name: ";
    cin>>st;
    student s1(st);
    s1.displaydata();
    student s;
    s.displaydata();
}