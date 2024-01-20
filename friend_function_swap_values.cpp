#include<iostream>
using namespace std;

class B;

class A{

    private:
    int x;
    public:
    friend int swap(A &, B &);
    void setdata(int n)
    {
        x=n;
    }

    void display()
    {
        cout<<"X: "<<x<<endl;
    }

};

class B{
private:
    int y;
    public:
    friend int swap(A &, B &);
    void setdata2(int n1)
    {
        y=n1;
    }

    void display2()
    {
        cout<<"Y: "<<y<<endl;
    }


};

int swap(A &o1, B &o2)
{
    int temp = o1.x;
    o1.x=o2.y;
    o2.y=temp;
}

int main( void)
{
        A ob1;
        B ob2;
    int a ,b;
    cout<<"Enter A: ";
    cin>>a;
    ob1.setdata(a);
    cout<<"Enter B: ";
    cin>>b;
    ob2.setdata2(b);
    cout<<"Value Before swapping: "<<endl;
    ob1.display();
    ob2.display2();

    swap(ob1,ob2);
    cout<<"Values After Swapping: "<<endl;
      ob1.display();
    ob2.display2();
}