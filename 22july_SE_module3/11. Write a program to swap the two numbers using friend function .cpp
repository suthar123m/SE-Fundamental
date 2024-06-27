#include<iostream>
using namespace std;
class calculate
{
	private:
		int a,temp;
	
	public:
		int b;
		
	friend void swapping();	
};
void swapping()
{
	
	calculate cal;
	cal.a=10;
	cal.b=20;
	
	int temp;
	cal.temp=cal.a;
	cal.a=cal.b;
	cal.b=cal.temp; 
	
	cout<<"a == "<<cal.a<<endl;
	cout<<"b == "<<cal.b<<endl;
}
main()
{
	swapping();
}
