#include<iostream>
using namespace std;

class area{

private:
int len,bread;
static int counter;

public:

area(){}


area( area &obj )
{
    cout<<"Copy constructor is called: "<<endl;
    len=obj.len;
    bread=obj.bread;
}
area(int length , int breadth)

{

    len=length;
    bread=breadth;
}  
void show_data();
float calculate_area();
};

void area ::show_data()
{
      counter++;
    cout<<"Value of length and breadth from  constructor: " <<counter <<  " is: "<<len <<" , " <<bread<<endl;
  
}

    float area::calculate_area()
    {
        return (len*bread);
    }

int area :: counter;
int main()
{

           int l,b;
            cout<<"Enter length: ";
            cin>>l;
            cout<<"Enter breadth: ";
            cin>>b;
             area a(l,b);
             area ar(a);
             a.show_data();
             ar.show_data();
            area are;
             float result=0;
             result = are.calculate_area();
             cout<<"The area of rectangle is: "<<result<<endl;
            

}