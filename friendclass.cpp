#include <iostream>
#include <cstdlib>
using namespace std;

class complex;

class calculator
{

public:
    int sumreal(complex, complex);
    int sumimaginary(complex, complex);
};

class complex
{

private:
    int a, b;

public:
    // When multiple function has to be decleared as a friend
    // function a entire class can be decleared as a friend class
    friend class calculator;

    // friend int calculator::sumreal(complex, complex);
    // friend int calculator::sumimaginary(complex, complex);

    // single function can be decleared as a friend function as line 28

    void setdata(int v1, int v2)
    {
        a = v1;
        b = v2;
    }

    void viewdata()
    {
        cout << "............................................................" << endl;
        cout << "The Complex Number is " << a << " + " << b << " i" << endl;
    }
};

int calculator::sumreal(complex o1, complex o2)
{
    return (o1.a + o2.a);
}

int calculator::sumimaginary(complex o1, complex o2)
{

    return (o1.b + o2.b);
}
int main()

{
    complex c1, c2;
    calculator c;
    int result, imagresult;
    int real, imaginary;
    cout << "..........Enter Your # First Complex Number.........." << endl;
    cout << "Enter Your real part: ";
    cin >> real;
    cout << "Enter your imaginary part: ";
    cin >> imaginary;
    c1.setdata(real, imaginary);
    cout << endl
         << "..........Enter Your # Second Number.........." << endl;
    cout << "Enter Your real part: ";
    cin >> real;
    cout << "Enter your imaginary part: ";
    cin >> imaginary;
    c2.setdata(real, imaginary);
    system("cls");
    c1.viewdata();
    c2.viewdata();
    cout << "............................................................" << endl;
    cout << "............................................................" << endl;
    result = c.sumreal(c1, c2);
    imagresult = c.sumimaginary(c1, c2);
    cout << "Sum or real part and imaginary part is  " << result << " + " << imagresult << " i" << endl;
}