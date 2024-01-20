#include <iostream>
#include <cstdlib>
using namespace std;
class complex_input;
class complex_add
{

public:
    int add_real_part(complex_input, complex_input);
    int add_imaginary_part(complex_input, complex_input);
};

class complex_input
{
private:
    int real, imaginary;
    static int count;

public:
    friend int complex_add::add_real_part(complex_input, complex_input);
    friend int complex_add::add_imaginary_part(complex_input, complex_input);
    void set_value(int a, int b)
    {
        real = a;
        imaginary = b;
    }

    void display_value()
    {
        cout << "............................................................." << endl;
        cout << "Your " << ++count << " Imaginary Number in a+ib form is " << real << " +"
             << " i " << imaginary << endl;
        cout << "............................................................." << endl;
    }
};

int complex_add::add_real_part(complex_input co, complex_input oc)
{

    return (co.real + oc.real);
}

int complex_add::add_imaginary_part(complex_input co, complex_input oc)
{

    return (co.imaginary + oc.imaginary);
}

int complex_input ::count;

int main(void)
{
    complex_input ci, c_i, cr;
    complex_add ca;
    int r1, r2;
    int r, i;
    cout << "............................................................." << endl;
    cout << "Enter #1 complex Number" << endl;
    cout << "Enter real part";
    cin >> r;
    cout << "Enter imaginary part";
    cin >> i;
    ci.set_value(r, i);
    cout << "............................................................." << endl;
    cout << "Enter #1 complex Number" << endl;
    cout << "Enter real part";
    cin >> r;
    cout << "Enter imaginary part";
    cin >> i;
    c_i.set_value(r, i);

    r1 = ca.add_real_part(ci, c_i);
    r2 = ca.add_imaginary_part(ci, c_i);
    cr.set_value(r1, r2);
    system("cls");

    ci.display_value();
    c_i.display_value();

    cout << endl
         << "Sum of The two Imaginary Number are:" << endl;
    cr.display_value();
}