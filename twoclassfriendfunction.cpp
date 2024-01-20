#include<iostream>
using namespace std;
class b;
class a {
    private:
    int x;
    public:
    friend int sum(a , b);
    void set_a(int value)
    {
        x=value;
    }
};

class b{
    private:
    int y;
    public:
     friend int sum(a , b);
    void set_y(int value)
    {
        y=value;
    }
};

    int sum(a a1 , b b1)
    {
        
        return(a1.x+b1.y);

    }

int main(void)
{
    a oa;
    b ob;
    int n1,n2,result;
    cout<<"Enter Value of X: ";
    cin>>n1;
    oa.set_a(n1);
    cout<<"Enter Value of Y: "<<endl;
    cin>>n2;
    ob.set_y(n2);
    result=sum(oa,ob);
    cout<<"Sum of  "<<n1<<" And  "<<n2 <<" is: "<<result;
}