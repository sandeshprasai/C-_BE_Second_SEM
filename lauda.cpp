 # include<iostream>
 using namespace std;
 class football
 {
 	private:
 		int rating;
 		public:
 			int no_match;
 			char p_name[20];
 			void get();
 			int  rtn();
 			void show();
 };
 class player:public football
 {
 	private:
 		int score;
 		char player_name[20];
 		public:
 			int goals;
 			void calculate();
 			void display();
 			
 };
 void football::get()
 {
 	cout<<"Enter the participant name=";
 	cin>>p_name;
 	cout<<"The participant name is="<<p_name<<endl;
 }
 int football::rtn()
 {
 	return rating;
 }
 void football::show()
 {
 	no_match=5;
 }
 void player::calculate()
 {
  score=(no_match*rtn())*2+goals;
 cout<<"Score="<<score<<endl;	
 }
 void player::display()
 {
 	goals=6;
 	cout<<"The goals are="<<goals<<endl;
 }
 int main()
 {
 	player p;
 	p.get();
 	p.rtn();
 	p.show();
 	p.calculate();
 	p.display();
 	return 0;
 }
 
 	
