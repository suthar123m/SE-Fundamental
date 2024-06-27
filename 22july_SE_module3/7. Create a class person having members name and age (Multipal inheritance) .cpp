#include<iostream>
using namespace std;
class student
{
	public:
		int percentage;
		
		void inputstudentData()
		{
			cout<<"Enter the studnet percentage == ";
			cin>>percentage;
		}
		void outputstudentData()
		{
			cout<<"Student percentage "<<percentage<<endl;
		}
};
class teacher
{
	public:
		string salary;
		
		void inputteacherData()
		{
			cout<<"Enter the teacher salary == ";
			cin>>salary;
		}
		void outputteacherData()
		{
			cout<<"Teacher salary = "<<salary<<endl;
		}
};
class person : public student,public teacher
{
	public:
		string person_name;
		int person_age;
		
		void inputpersonData()
		{
			cout<<"Enter person name == ";
			cin>>person_name;
			cout<<"Enter person age == ";
			cin>>person_age;
		}
		void outputpersonData()
		{
			cout<<"Person name ==== "<<person_name<<endl;
			cout<<"Person age ==== "<<person_age<<endl;
		}
};
main()
{
	person per1;
	per1.inputstudentData();
	per1.inputteacherData();
	per1.inputpersonData();
	
	per1.outputstudentData();
	per1.outputteacherData();
	per1.outputpersonData();
}
