#include<iostream>
using namespace std;
class largest
{
    private:
    int a,b,c;
    public:
    void get()
    {
        cout<<"Enter the numbers";
        cin>>a>>b>>c;
    }
    void calculate()
      {
        if ((a>b)&&(a>c))
        {
            cout<<"the largest number is="<<a;
        }
        else if ((b>a)&&(b>c))
        {
            cout<<"the largest number is="<<b;
        }
        else
        {
            cout<<"the largest number is="<<c;
        }
      }
};
int main()
{
largest l;
l.get();
l.calculate();
return 0;
}