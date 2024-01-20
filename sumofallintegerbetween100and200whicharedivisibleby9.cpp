#include <iostream>
using namespace std;

class sumofnumbers
{

private:
    int start, end;

public:
    friend sumofnumbers find(sumofnumbers s1);
    void setrange(int a, int b)
    {
        start = a;
        end = b;
    }
};

sumofnumbers find(sumofnumbers s1)
{
    int sum = 0;
    for (s1.start; s1.start < s1.end; s1.start++)
    {

        if (s1.start % 9 == 0)
        {
            cout << "The number divisible by 9 in range of 100 to 200 are: " << s1.start << " " << endl;
            sum = sum + s1.start;
        }
    }
    cout << "Sum of the number is: " << sum;
}

int main()
{
    sumofnumbers s;
    s.setrange(100, 200);
    find(s);
}