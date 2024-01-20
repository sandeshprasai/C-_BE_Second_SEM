#include<iostream>
#include<string>
using namespace std;
class addition
{
    private:
    int d1,d2;
    char name[20];
    public:
    void get(char x[],int y)
    {
        strcpy(name,x);
        d1=y;
    }
    void calculation(addition m,addition n)
    {
        d2=m.d1+n.d1;
        cout<<"total distance="<<d2;
    }
    void display()
    {
        cout<<"city name="<<name;
    }
};
int main(void)
{
    addition a1,a2,a3;
    a1.get("dhangadi",400);
    a2.get("pokhara",300);
    a1.display();
    a2.display();
    a3.calculation(a1,a2);
    return 0;
}