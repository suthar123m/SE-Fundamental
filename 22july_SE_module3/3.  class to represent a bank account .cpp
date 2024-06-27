#include<iostream>
#include<string>
using namespace std;
class datamember
{	
	public:
		string depositor;
		string account_Number;
		string account_type;
		int balance_amount;
		int withdrawl_amount;
		
	void inputData()
	{
		cout<<"Enter depositer Name = ";
		cin>>depositor;
		cout<<"Enter Account number = ";
		cin>>account_Number;
		cout<<"Enter Account type = ";
		cin>>account_type;
		cout<<"Enter Balance amount = ";
		cin>>balance_amount;
	}	
};
class memberfunction : public datamember
{
	public:
		
		void displayData()
		{
			cout<<"\n\nDepositer name = "<<depositor<<endl;
			cout<<"Account number = "<<account_Number<<endl;
			cout<<"Account type = "<<account_type<<endl;
			cout<<"Balacne amount = "<<balance_amount<<endl;
		}
};
main()
{
	memberfunction memf;
	memf.inputData();
	memf.displayData();
}
