#include <iostream>
#include<cmath>
using namespace std;
class point2;
class point1
{
private:
    int x1, y1;

public:
friend float distance(point1 , point2 );
    point1(int a, int b)
    {

        x1 = a;
        y1 = b;
    }
};

class point2
{
private:
    int x2, y2;

public:
friend float distance(point1 , point2 );
    point2(int a, int b)
    {
        x2 = a;
        y2 = b;
    }
};

float distance (point1 o1 , point2 o2 )
{

    float result;
        result=   sqrt(pow(o2.x2-o1.x1,2)+pow(o2.y2-o1.y1,2));
        cout<<"The distance between X2: "<<o2.x2<<"  X1 :"<<o1.x1<<"  Y2: "<<o2.y2<<" and Y1: "<<o1.y1<<" is: ";
        return result;

}

int main(void)
{

    float c1, c2,result;
    cout << "Enter X1: ";
    cin >> c1;
    cout << "Enter Y1: ";
    cin >> c2;
    point1 p1(c1, c2);

    cout << "Enter X2: ";
    cin >> c1;
    cout << "Enter Y2: ";
    cin >> c2;
    point2 p2(c1, c2);
    result=distance(p1,p2);

cout<<result<<endl;
}