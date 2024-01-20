#include<iostream>
using namespace std;

 class complex
 {
    private:
    int real,imaginary;
    public:
    void setcomplex()
    {
        cout<<"Enter real part: "<<endl;
        cin>>real;
        cout<<"Enter Imaginary Part: "<<endl;
        cin>>imaginary;
    }

            void displaycomplex()
            {
                cout<<"Your Complex Number in a+ ib form is: "<<real<<" + "<<imaginary<<endl;
            }

 };

class complexadd
{
    private:
    int realsum,imagsum;
    public:
        void add(complex  cax , complex cay)
        {
                realsum=cax.real+cay.real;
                imagsum=cax.imaginary+cay.imaginary;
        }
        void showsum()
        {
            cout<<"Sum of two Complex Number is: "<<realsum<<" + "<<imagsum<<endl;
        }
};

int main(void)
{
    complex c1,c2;
    c1.setcomplex();
    c2.setcomplex();
    c1.displaycomplex();
    c2.displaycomplex();
    complexadd ca;
    ca.add(c1,c2);
    ca.showsum();
}
 