#include <iostream>
using namespace std;

class area
{

private:
    int len, bread, are;

public:
    area(int l, int b)
    {
        len = l;
        bread = b;
        are = len * bread;
    }

    void display()
    {
        cout << "The area of rectangle of length: " << len << " and breadth: " << bread << " is: " << are;
    }
};

int main()
{
    int l, b;
    cout << "Enter length of rectangle: ";
    cin >> l;
    cout << "Enter The breadth of rectangle: ";
    cin >> b;
    area a(l, b);
    a.display();
}