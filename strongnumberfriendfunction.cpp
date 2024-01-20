#include<iostream>
using namespace std;

class strongnumber{

    private:
    int number;
    public:
    friend strongnumber check(strongnumber sn);
    void setnum(int n)
    {
         number=n;
    }



};


strongnumber check(strongnumber sn )
{
    int rem,sum=0,fact=1,i=1;
   int temp=sn.number;
    while(sn.number>0)
    {
        
        rem=sn.number%10;
        if(rem==0||rem==1)
        {
            fact=1;
        }
        else{
            fact=1;
            for(i=1;i<=rem;i++)
            {
                fact=fact*i;
               
            }
             
        }
        sn.number=sn.number/10;
        sum=sum+fact;
    }
    if(sum==temp)
    {
        cout<<"Number is strong";
    }
    else{
        cout<<"Not strong";
    }
}


int main(void)
{

    strongnumber sn1;
    int n;
    cout<<"Enter a number to check: ";
    cin>>n;
    sn1.setnum(n);
    check(sn1);
}