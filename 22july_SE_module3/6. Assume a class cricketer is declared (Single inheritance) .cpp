#include<iostream>
using namespace std;
class cricketer
{
	public:
		float average_run;
		string name;
		int age;
	
		void inputcricketerData()
			{	
				cout<<"Enter the playre name == ";
				cin>>name;
				cout<<"Enter the player age == ";
				cin>>age;
			}
		void outputcricketerData()		
			{
				cout<<"Player name = "<<name<<endl;
				cout<<"Player age = "<<age<<endl;
			}
};

class batsman : public cricketer
{
	private:
		int total_run;
		int best_performance;
	
	public:
		void inputbatsmanData()
			{
				cout<<"\nEnter the total run == ";
				cin>>total_run;
				cout<<"Enter the best performance == ";
				cin>>best_performance;	
			}	
		void outputbatsmanData()
			{
				average_run=total_run/best_performance;
				cout<<"Average run == "<<average_run<<endl;
			}
				
};
main()
{
	cricketer crk;
	batsman bats;
	
	crk.inputcricketerData();
	crk.outputcricketerData();
	
	bats.inputbatsmanData();
	bats.outputbatsmanData();
		
}
