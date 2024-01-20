#include<iostream>
#include<string>
using namespace std;
class inputnum;
class checknum
{
    public:
    void check(inputnum ip2);

};

class inputnum{

    private:
    string format;
    public:
    friend void checknum::check(inputnum);
    void setstring(string st)
    {
        format=st;
        //cout<<"Number is: "<<format;
    }

};


void checknum::check(inputnum ip2)
{

    int i;
    string temp;
    temp=ip2.format;
    for(i=0;i<temp.length();i++)
    {
       if(temp.at(i)>1 || temp.at(i)<8 )
        {
            cout<<"Octal"<<endl;
        }
       else if(temp.at(i)=='0' || temp.at(i)=='1' )
        {
            cout<<"Number is binary"<<endl;
        }

        

    }
}

int main(void)
{
    inputnum ip;
    checknum ck;
    string st;
    cout<<"Enter a Number format";
    cin>>st;
    ip.setstring(st);
    ck.check(ip);

}