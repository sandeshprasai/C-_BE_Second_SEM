#include<iostream>
using namespace std;

class addition
{
    private:
    int a,b,sum;

    public:
    void getdata(int x, int y)
    {
        a=x;
        b=y;

        }

    void calculation()
    {
        sum=a+b;

    }

    void result()
    {

        cout<<"Sum of two number is:"<<sum;
    }

};

int main(void)
{

    addition ad;
    ad.getdata(40,70);
    ad.calculation();
    ad.result();
}
