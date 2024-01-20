#include<iostream>
using namespace std;
class addition
{
    private:
    int a,b,sum;
    public:
    void get()
    {
        cout<<"Enter the number";
        cin<<a<<b;
    }
    void calculate()
    {
        sum=a+b;
    }
    void display()
    {
        cout<<"The sum is="<<sum;
    }
};
int main()
{
    addition s;
    s.get();
    s.calculate();
    s.display();
    return 0;
}