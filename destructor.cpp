#include <iostream>
using namespace std;

class dectrucutor
{
    int a, b, sum;

public:
    void setdata(int x, int y)

    {
        a = x;
        b = y;
    }

    int calculatesum()
    {
        return a + b;
    }
    ~dectrucutor()
    {
        cout << "object destroyed" << endl;
    }
};

int main(void)
{
    int a, b;
    cout << "Enter a and b" << endl;
    cin >> a >> b;
    dectrucutor d;
    d.setdata(a, b);
    int result = d.calculatesum();
    cout << "Sum is:" << result << endl;
    dectrucutor d1, d2;
}
