#include<iostream>
using namespace  std;

class fair
{
    int total;
    public:
    void setdata(float rate=5 , float amount=9000)
    {
            total=amount-(amount*rate/100);
            cout<<total<<endl;
        } 
};

int main(void)
{

    fair r;
    cout<<"The fair amoont For normal Peple is:";
    r.setdata(0);
    cout<<"The fair amoont For student  is:";
    r.setdata(5,10000);
    cout<<"The fair amoont For Adult is:";

    r.setdata(8,10000);
    cout<<"The fair amoont For children  is:";
    r.setdata(50);
    cout<<"The fair amoont For fenale is:";
    r.setdata(5,9000);
}