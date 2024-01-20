#include <iostream>
using namespace std;

class decimaltobinary
{
private:
    int decimal, rem, sum = 0;

public:
    friend decimaltobinary convert(decimaltobinary obj);

    void setvalue(int n)
    {
        decimal = n;
    }

    void printvalue()
    {
        cout << "Your decimal number is" << decimal << endl;
    }
};

decimaltobinary convert(decimaltobinary obj)
{
    int i = 1, j, binary = 0;
    cout << "Your binary converted number is: ";
    while (obj.decimal > 0)
    {

        binary = binary + (obj.decimal % 2) * i;
        i = i * 10;
        obj.decimal = obj.decimal / 2;
    }
    cout << binary;
}

int main()
{
    int value;
    cout << "Enter a decimal number";
    cin >> value;
    decimaltobinary db;
    db.setvalue(value);
    convert(db);
}