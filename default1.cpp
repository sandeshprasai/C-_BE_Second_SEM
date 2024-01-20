#include<iostream>
using namespace std;
class defaultarg
{
    private:
    int total;
    public:
    void get(int rate=9000,int discount=5)
    {
      total=rate-(rate*discount/100);
      cout<<total<</n;
    }
};
int main(void)
{
defaultarg df;
cout<<"the price for normal people is";
df.get();
cout<<"the price for student is";
df.get(10000);
cout<<"the price for adult is";
df.get(10000,8);
cout<<"the price for children is";
df.get(50);
cout<<"the price for female is";
df.get();
return 0;
}