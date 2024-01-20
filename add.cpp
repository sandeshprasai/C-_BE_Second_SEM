#include<iostream>
using namespace std;
class addition
{
    private:
    int a,b,sum;
    public:
    void get();
    void calculation();
    void display();
};
void  addition::get()
{
    cout<<"Enter two numbers";
   cin>>a>>b;    
}
void addition:: calculation()
{
    sum=a+b;
}
void  addition :: display()
{
    cout<<"The sum is="<<sum;
}
int main()
{
addition s;
s.get();
s.calculation();
s.display();
return 0;
}