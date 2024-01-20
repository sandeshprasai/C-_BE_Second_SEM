#include<iostream>
using namespace std;

class reverse{
    int number;
    public:

    friend reverse ffunction(reverse r);
    void setnumber(int num)
    {
        number=num;
    }
};


reverse ffunction(reverse r)
{

int rem,sum=0;

while(r.number>0)
{
    rem=r.number%10;
    sum=(sum*10)+rem;
    r.number=r.number/10;
}
cout<<"Reverse of given numbr is "<<sum;
}

int main()
{
    int num;
    cout<<"Enter a number to check reverse";
    cin>>num;

    reverse r1;
    r1.setnumber(num);
    ffunction(r1);
}