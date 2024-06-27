#include<iostream>
using namespace std;
	
	int area_circle(int redius)
	{
		int pi=3.14;
		return pi*redius*redius;
	}
	int area_rectangle(int lenght,int breadth)
	{
		return lenght*breadth;
	}
	int area_tringle(int base,int hight)
	{
		return base*hight;
	}
main()
{
	int redius,lenght,breadth,base,hight;
	
	cout<<"Enter the value of redius == ";
	cin>>redius;
	cout<<"Area of circle == "<<area_circle(redius)<<endl;
	
	cout<<"\nEnter the value of lenght == ";
	cin>>lenght;
	cout<<"Enter the value of breadth == ";
	cin>>breadth;
	cout<<"Area of rectangle == "<<area_rectangle(lenght,breadth)<<endl;
	
	cout<<"\nEnter the value of base == ";
	cin>>base;
	cout<<"Enter the value of hight == ";
	cin>>hight;
	cout<<"Area of tringle == "<<area_tringle(base,hight)<<endl;
}	

