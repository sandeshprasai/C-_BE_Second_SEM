#include<iostream>
using namespace std;
class addtime
{
    private:
    int hr,min,hour,minutes;
    public:
    void gettime(int hh , int mm)
    {

            hour=hh;
            minutes=mm;

    }
    void sumtime(addtime,addtime);
    void display();
};
void addtime::sumtime(addtime a1, addtime a2)
{
            min = a1.minutes+a2.minutes;
            hr=min/60;
            min=min%60;
            hr=hr+(a1.hour+a2.hour);

}
void addtime::display()
{
            cout<<"Total Hous is :"<<hr<<" and total minutes is: "<<min;
}
int main()
{
    addtime at1,at2,at3;
    at1.gettime(10,55);
    at2.gettime(12,15);
    at3.sumtime(at1,at2);
    at3.display();
}