#include<iostream>
using namespace std;

class election
{
	
	int vote,voters,candvote;
	char candname[20],candpartry[20];	
	public:
	void getdata()
	{
		double percentage=0;
		cout<<"Enter total voters:"<<endl;
		cin>>voters;
		cout<<"Enter total vote:"<<endl;
		cin>>voters;	
		percentage=((voters-vote)/voters)*100;
		cout<<"Total percentage of votes were:"<<percentage;
	}	
	
	election()
	{
		
		cout<<"Enter candidate name:"<<endl;
		cin>>candname;
		cout<<"Enter Candiate Party:"<<endl;
		cin>>candpartry;
		cout<<"Enter Candidate Votes:"<<endl;
		cin>>candvote;
		
	}
	
	election(election e1, election e2, election e3)
	{
		
		if(e1.candvote>e2.candvote&&e1.candvote>e3.candvote)
		{
			cout<<"The winner is:"<<e1.candname<<" from "<<e1.candpartry<<" with "<<e1.candvote<<" votes."<<endl;
		}
		else if(e2.candvote>e1.candvote&&e2.candvote>e3.candvote)
		{
			cout<<"The winner is:"<<e2.candname<<" from "<<e2.candpartry<<" with "<<e2.candvote<<" votes."<<endl;
		}		
		
		else 
		{
			cout<<"The winner is:"<<e3.candname<<" from "<<e3.candpartry<<" with "<<e3.candvote<<" votes."<<endl;
		}
	}
};

int main(void)
{
	election e1,e2,e3;	
	election e4(e1,e2,e3);
	e1.getdata();
}
