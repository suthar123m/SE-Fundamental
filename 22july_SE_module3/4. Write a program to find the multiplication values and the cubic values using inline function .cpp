#include<iostream>
using namespace std;
inline int cube(int a)
{
	int result = a*a*a;
	return result;
}
main()
{
	int a;
	cout<<"Enter the value of number = ";
	cin>>a;
	
	cout<<"cube is === "<<cube(a);
}
