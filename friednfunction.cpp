#include<iostream>
using namespace std;

class friendfunction
{

private:
int a ,b;

public:
        friend friendfunction acessdata(friendfunction a1, friendfunction a2);
        void setdata(int real , int imaginary)
        {
            a=real;
            b=imaginary;
        }

        void printdata()
        {
            cout<<"Your Given Number is "<<a<<"+"<<b<<"i"<<endl;
        }

};

    friendfunction acessdata(friendfunction a1, friendfunction a2)
    {
        friendfunction a3;
        a3.setdata( (a1.a+a2.a) ,(a1.b+a2.b) );
        return a3;
    }

int main()
{
    
    friendfunction f1,f2,sum;
    f1.setdata(10,20);
    f2.setdata(12,12);
    f1.printdata();
    f2.printdata();

    sum= acessdata(f1,f2);
    sum.printdata();


}