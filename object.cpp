#include<iostream>
using namespace std;

class shop
{
    private:
    int id[100];
    int price[100];
    int counter;
    public:

    void initcounter(){
        counter=0;
    }

    void setprice()
    {
        cout<<"Enter Prouct id "<<endl;
        cin>>id[counter];
        cout<<"Enter Product price";
        cin>>price[counter];
        counter++;

    }

    void displayprice()
    {
        for (int i = 0; i < counter; i++)
        {
            cout<<"The Price of the product with id  "<<id[i]<<" is "<<price[i]<<endl;
        }
        
    }

};


int main(void )
{

    shop s;
    s.initcounter();
    s.setprice();
    s.setprice();
    s.setprice();
    s.setprice();
    s.displayprice();

}