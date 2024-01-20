#include <iostream>
using namespace std;

class employee
{
private:
    static int id;
    string name;

public:
    void getdata()
    {
        cout << "Enter The name of the employee of id " << id;
        cin >> name;
        id++;
    }

    void showdata()
    {
        cout << "The name of the employee with id " << id << " is " << name << endl;
    }
};
int employee::id;
int main(void)
{
    employee e1, e2;
    e1.getdata();
    e1.showdata();
    e2.getdata();
    e2.showdata();
}