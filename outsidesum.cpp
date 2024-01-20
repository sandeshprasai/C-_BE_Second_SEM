#include<iostream>
using namespace std;

clsss addition
{
    private:
    int a,b,sum;

    public:
    void getdata(int t, int );
    void calculation();
    void result();

};

void addition::getdata(int x ,int y)
{
    a=x;
    b=y;
}
void addition::calculation()
{

    sum=a+b;

}

void addition::result()
{

    cout<<"Sum is Sum: "<<sum;

}
int main(void)
{

    addition ad;
    ad.getdata(40,70);
    ad.calculation();
    ad.result();
}
