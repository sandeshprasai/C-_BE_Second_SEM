#include<iostream>
using namespace std;

class addition
{
    private:
    int a,b,sum;

    public:
    void getdata()
    {

        cout<<"Enter Two number:"<<endl;
        cin>>a>>b;
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
    ad.getdata();
    ad.calculation();
    ad.result();
}
