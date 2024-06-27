#include<iostream>
using namespace std;
class Mathematic_operation
{
	public:
		int add(int a,int b)
		{
			cout<<a+b<<endl; 
		}
		int sub(int a,int b)
		{
			cout<<a-b<<endl;
		}
		int multi(int a,int b)
		{
			cout<<a*b<<endl;
		}
		int div(int a,int b)
		{
			cout<<a/b<<endl;
		}
};
main()
{
	Mathematic_operation math;
	math.add(100,50);
	math.sub(100,50);
	math.multi(20,20);
	math.div(100,20);
}
