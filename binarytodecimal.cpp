#include<iostream>
#include<cmath>
using namespace std;

 class binarytodecimal{

        private:
        int binary;
        public:
        friend int convert(binarytodecimal bd1);
        void setbinary(int n)
        {
            binary=n;
        }

 };

int convert(binarytodecimal bd1)
{
    int decimal=0,rem=0;
   int  length=0;
    cout<<"Length = "<<length<<endl;

        while(bd1.binary!=0)
        {
            rem=bd1.binary%10;
            bd1.binary=bd1.binary/10;
            decimal+=rem*pow(2,length);
            ++length;
        }
        return decimal;
}
 int main(void)
 {
    int n,decimal;
    cout<<"Enter a binary number";
    cin>>n;
    binarytodecimal bd;
    bd.setbinary(n);
   decimal= convert(bd);
   cout<<"The Equvalent decimal Number is "<<decimal<<endl;

 }