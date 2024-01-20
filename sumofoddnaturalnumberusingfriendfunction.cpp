#include<iostream>
using namespace std;

class oddsum{

    int range;

    public:
    friend oddsum findsum (oddsum s1);
    void setrange( int value)
    {
        range=value;
    }
};

oddsum findsum(oddsum s1)
{
    oddsum s2;
    int sum=0;
for (int i = 1; i <=s1.range; i+=2)
{
    sum=sum+i;
}

cout<<"Sum is "<<sum;


}

int main(void)
{

oddsum o1,o2;

int range;
cout<<"Enter the limit to find sum";
cin>>range;

o1.setrange(range);
findsum(o1);

}