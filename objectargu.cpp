#include<iostream>
using namespace std;
class addition
{
    private:
    int a,add;
    public:
    void get(int x)
    {
        a=x;
    }
    void sum(addition x,addition y)
    {
        add=x.a + y.a;
        cout<<"the sum is="<<add;
    }
};
int main(void)
{                                       
    addition a1,a2,a3;
    a1.get(10);
    a2.get(20);
    a3.sum(a1,a2);
    return 0;
}