#include<iostream>
using namespace std;

class rectangle
{
    int len,bred,area;
    public:
    rectangle()
    {
        len=0;
        bred=0;
        area=len*bred;
        cout<<"The area of rectangle of length: "<<len<<" and breadth: "<<bred<<" is: "<<area<<endl;

    }

    rectangle(int l)
    {
        len=l;
        bred=l;
        area=len*bred;
         cout<<"The area of rectangle of length: "<<len<<" and breadth: "<<bred<<" is: "<<area<<endl;
    }

    rectangle(int l , int b)
    {
            len=l;
            bred=b;
            area=len*bred;
             cout<<"The area of rectangle of length: "<<len<<" and breadth: "<<bred<<" is: "<<area<<endl;
    }


};
int main(void)
{

    int l1,b1;
    cout<<"Enter Length of rectangle: ";
    cin>>l1;

    cout<<"Enter Breadth of rectangle: ";
    cin>>b1;

    rectangle r1;
    rectangle r2 (l1);
    rectangle r3 (l1,b1);


}