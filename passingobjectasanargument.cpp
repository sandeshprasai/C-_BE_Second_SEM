#include<iostream>
#include<conio.h>
using namespace std;

class complex
{
    int a ,b;

    public:
    void setvalue(int v1, int v2)
    {
        a=v1;
        b=v2;

    }

    void printvalue()
    {
        cout<<"The given complex number is "<<a<<"+"<<b<<"i"<<endl;
    }


    void addobject(complex c1, complex c2)
    {
        a=c1.a+c2.a;
        b=c1.b+c2.b;
    }

};

int main(void )
{

    complex n1,n2,n3;
    int a ,b;
    
    n1.setvalue(5,7);
    n2.setvalue(8,7);

    n1.printvalue();
    n2.printvalue();

    n3.addobject(n1,n2);
    n3.printvalue();

}