#include<iostream>
using namespace std;
class calculation
{
	public:
		calculation(int a,int b)
		{
			cout<<"Enter the value of A == "<<a<<endl;
			cout<<"Enter the value of B == "<<b<<endl;
			
			cout<<"\n\nAddition of A and B === "<<a+b<<endl;
			cout<<"\nSubstraction of A and B === "<<a-b<<endl;
			cout<<"\nMultiplication of A and B === "<<a*b<<endl;
			cout<<"\nDivision of A and B === "<<a/b<<endl;
		}
};

main()
{
	calculation cal = calculation(100,20);

}
