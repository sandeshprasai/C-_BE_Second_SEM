#include<iostream>
using namespace std;

class AddAmount{

    private:
    int amount=50;
    public:
    AddAmount()
    {
            amount=amount+0;
            cout<<"The total amount without adding any amount is: "<<amount<<endl; 
    }

    AddAmount(int money)
    {
            amount=amount+money;
            cout<<"The total amount after  adding: "<<money   <<" $ is: "<<amount<<endl;
    }

};

int main(void)
{   
    int mn;
    cout<<"Enter a amount to add: ";
    cin>>mn;
    AddAmount ad;
    AddAmount add(mn);

}