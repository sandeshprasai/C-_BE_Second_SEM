#include <iostream>
using namespace std;
class octalnum;
class numbercheck
{
private:
    int rem, temp;

public:
    int checknum(octalnum n);
};

class octalnum
{

private:
    int num;

public:
    friend int numbercheck::checknum(octalnum);
    void setnumber(int number)
    {
        num = number;
    }
};

int numbercheck::checknum(octalnum n)
{
    temp = n.num;
    while (n.num > 0)
    {
        rem = n.num % 10;
        if (rem > 7)
        {
            cout << "The number is not octal: " << temp;
            exit(1);
        }
        n.num = n.num / 10;
    }

    cout << "The given Number:" << temp << " Is Octal " << endl;
}

int main(void)
{
    int octal;

    cout << "Enter The octal Number: ";
    cin >> octal;

    octalnum otn;
    numbercheck nc;
    otn.setnumber(octal);
    nc.checknum(otn);
}