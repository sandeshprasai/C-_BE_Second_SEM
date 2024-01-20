#include<iostream>
#include<string>
using namespace std;

class checknum{

private:

string st;

public:
void setstring(string s)
{
    st=s;
}

void display()
{
    cout<<"NUmber is "<<st;
}

void check()
{
    int i;
    for(i=0;i<st.length();i++)
    {

            if (st.at(i) == '0' || st.at(i) == '1')
        {
            cout << "Incorrect Binary Format" << endl;
            
        }


    }
}

};

int main(void )
{
    string num;
    cout<<"Enter a number to check";
    cin>>num;
    checknum ck;
    ck.setstring(num);
    ck.check();
    ck.display();
    }
