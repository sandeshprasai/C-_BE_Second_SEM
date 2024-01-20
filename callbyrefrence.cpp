#include<iostream>
using namespace std;

class swap
{

    private:
        int a;
    public:
    void swapobj( swap , swap);
        void setdata(int x)
        {
                a=x;
        }

    

};

int main()
{
   swap s,sp;
   s.setdata(20);
   sp.setdata(30); 
}