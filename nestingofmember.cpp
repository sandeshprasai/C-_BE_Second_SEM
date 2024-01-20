#include <iostream>
#include<string>
using namespace std;

class convert
{
    private:
    string s;
    void check_binary();
public:
    void input_binary();
    
    void convert_binary();
    void display();
};

void convert::input_binary()
{
    cout << "Enter a binary number" << endl;
    cin >> s;
}

void convert ::check_binary()
{
    for (int i = 0; i<s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect Binary Format" << endl;
            exit(0);
        }
    }
}

void convert ::convert_binary()
{
    check_binary();
    int i;
    for (i = 0; i<s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }

        else
        {
            s.at(i) = '0';
        }
    }
}

void convert::display()
{
     cout<<"Your Binary Number is ";
    for (int i = 0; i<s.length(); i++)
    {
       
                cout << s.at(i);
    }
    cout<<endl;
}

int main()
{
    convert c;
    c.input_binary();
    //c.check_binary();
    c.convert_binary();
    c.display();
    
    
    c.display();
}