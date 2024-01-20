#include<iostream>
using namespace std;

int volume(float r, float h)
{
    return(3.14*r*r*h);
}

int volume(int a )
{
    return(a*a*a);
}

int volume(int l ,int b,int h)
{
    return(l*b*h);
}

int main()
{
    cout<<"The volume of cylinder of radius 3 and height 5 is: "<<volume(3,5)<<endl;
    cout<<"The volume of cylinder of cuboid of side 3 is : "<<volume(3)<<endl;
    cout<<"The area of rectangle of length 5 and breadth 8 and height 9 is: "<<volume(5,8,9)<<endl;
}