#include<iostream>
//#include<stdlib.h>
using namespace std;

class company
{

    private:
    int id,salary;
    string name;  
    static int i;  

    public:
    void getdata();
    void showdata();

};

void company::getdata()
{
    
    cout<<"Enter the Id of an employee"<<i+1<<endl;
    cin>>id;
   
    cout<<"Enter The name of an employee"<<endl;
    cin>>name;

     cout<<"Enter the salary of an employee"<<endl;
    cin>>salary;
    i++;
} 
int company::i;
void company::showdata()
{
    cout<<"The id of an employee is: "<<id<<endl;
    cout<<"The name of an employee is: "<<name<<endl;
    cout<<"The salary of an employee is:"<<salary<<endl;
}

int main(void)
{
    int i,n;
    cout<<"Enter the Total number of employee to get";
    cin>>n;
    company emp[n];

        cout<<".................INPUT DATA OF AN EMOLOYEE................."<<endl;

    for ( i = 0; i < n; i++)
    {
    emp[i].getdata();
    }
    
    cout<<".................OUPPUT DATA OF AN EMOLOYEE................."<<endl;

    for ( i = 0; i < n; i++)
    {
    emp[i].showdata();
    }
}