#include<iostream>
using namespace std;
class Test 
{
	private:
   int x, y;
	public:
	void input() 
	{
       	cout<<"Enter the value of X == ";
       	cin>>x;
       	cout<<"Enter the value of Y == ";
       	cin>>y;
   	}

	friend void find(Test t);
};
	void find(Test t) 
	{
	if (t.x > t.y) 
	{
    	cout << "Largest is == " << t.x;
	} 
	else 
	{
    	cout << "Largest is == " << t.y;
	}
}
	int main()
	{
		Test t;
		t.input();
   		find(t);

 	return 0;
}
