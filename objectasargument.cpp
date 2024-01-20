#include<iostream>
using namespace std;

class weight{
private:
float kg,gram,t1,t2;

public:
void setdata(int a , int b);
float adddata(weight w3 ,weight w4);
void showdata();

};
void weight::setdata(int a, int b)

{

    kg=a;
    gram=b;
}

void weight::showdata()
{

 cout<<"Kg: "<<kg<<" Gram: "<<gram<<endl;


}

float weight::adddata(weight w3 ,weight w4)
{

    kg= w3.kg+w4.kg;
    gram=w3.gram+w4.gram;

}

int main(void)
{
    weight w1,w2,w3;
    float kg,gram;
    cout<<".................Enter weight #1................. "<<endl;
    cout<<"Enter weight in Kg"<<endl;
    cin>>kg;
    cout<<"Enter the weight in gram"<<endl;
    cin>>gram;
    w1.setdata(kg,gram);

    cout<<".................Enter weight #2................. "<<endl;
    cout<<"Enter weight in Kg"<<endl;
    cin>>kg;
    cout<<"Enter the weight in gram"<<endl;
    cin>>gram;
    w2.setdata(kg,gram);

     
     w1.showdata();
     w2.showdata();
     w3.adddata(w1,w2);
     cout<<".................Summed  Weight Are  ................. "<<endl;
     w3.showdata();
        

}