//Assume that the test results of a batch of students are stored in three different 
//classes. Class Students are storing the roll number. Class Test stores the 
//marks obtained in two subjects and class result contains the total marks 
//obtained in the test. The class result can inherit the details of the marks 
//obtained in the test and roll number of students. (Multilevel Inheritance) 

#include<iostream>
using namespace std;
class student
{
	public:
		int roll_no;
		
		void inputstudentData()
		{
			cout<<"Enter the student roll no. == ";
			cin>>roll_no;
		}
		
		void outputstudentData()
		{
			cout<<"\nStudent roll no. == "<<roll_no<<endl;
		}
};
class test : public student
{
	public:
		int marks1;
		int marks2;
		
		void inputtestData()
		{
			cout<<"Enter the student total marks 1 == ";
			cin>>marks1;
			cout<<"Enter the student total marks 2 == ";
			cin>>marks2;
		}
		
		void outputtestData()
		{
			cout<<"\nStudent total marks 1 == "<<marks1<<endl;
			cout<<"\nStudent total marks 2 == "<<marks2<<endl;
		}
};
class result : public test
{
	public:
		int total_marks;
		
		void displayresultData()
		{
			total_marks=marks1+marks2;
			cout<<"\nTotal marks == "<<total_marks<<endl;
		}
};
main()
{
	result res1;
	
	res1.inputstudentData();
	res1.inputtestData();
	
	res1.outputstudentData();
	res1.outputtestData();
	res1.displayresultData();
}
