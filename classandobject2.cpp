#include<iostream>
using namespace std;

class check
{
    private:
    int a,b,c;

    public:
    int x,y,z;
    void setData(int a1, int b1 , int c1);
    void showData()
    {
    cout<<"The value of a is: "<<a<<endl;
    cout<<"The value of b is: "<<b<<endl;
    cout<<"The Value of c is: "<<c<<endl;
    cout<<"The Value of x setted from main is: "<<x<<endl;
    cout<<"The Value of y setted from main is: "<<y<<endl;
    cout<<"The Value of z setted from main is: "<<z<<endl;
    
    }
};

void check ::setData(int a1, int b1 , int c1)
{
    a=a1;
    b=b1;
    c=c1;
}

int main()
{
    check c;
    c.setData(10,20,30);
    c.x=100;
    c.y=200;
    c.z=300;
    c.showData();
}