#include<iostream>
using namespace std;
class defaultargs 
{

    private:
        int total;
    public:
    void getdata(int salary , int rate =9)
    {
            total=salary+(salary*rate/100);
            cout<<"Old Salary was:"<<salary<<"New Salary is: "<<total<<endl;
    }


};

int main(void)
{
defaultargs df ,df2;
cout<<"The increased salary of Mis Oficer is ";
df.getdata(50000,12);
cout<<"The increased salary of programer is ";
df.getdata(45000,8);
cout<<"The increased salary of Admin staff is ";
df.getdata(35000);
cout<<"The increased salary of Helper is ";
df.getdata(15000);
}