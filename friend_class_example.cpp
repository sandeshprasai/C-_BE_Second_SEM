#include <iostream>
#include <cmath>
using namespace std;

class binarytodecimal;

class check_bin
{

    int binary;

public:
    void checkbinary(binarytodecimal);
};
class binarytodecimal
{
    int num;

public:
    friend void check_bin::checkbinary(binarytodecimal);
    void setnum(int n)
    {
        num = n;
    }
    void convert()
    {
        int temp = num;
        int power = 0, rem = 0, decimal = 0;

        while (num > 0)
        {
            rem = num % 10;
            decimal += (rem)*pow(2, power);
            num = num / 10;
            ++power;
        }

        cout << "The decimal value of binary number: " << temp << " is: " << decimal << endl;
    }
};

void check_bin ::checkbinary(binarytodecimal b1)
{
    int rem = 0;
    while (b1.num > 0)
    {
        rem = b1.num % 10;
        if (rem != 0 && rem != 1)
        {
            cout << "Invalid binary Form" << endl;
            exit(1);
        }
        b1.num = b1.num / 10;
    }
}

int main()
{
    binarytodecimal b;
    check_bin cb;

    int n;
    cout << "Enter the binary number in 0 and 1 form" << endl;
    cin >> n;
    b.setnum(n);
    cb.checkbinary(b);
    b.convert();
}