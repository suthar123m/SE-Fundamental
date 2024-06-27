#include<iostream>
#include<vector>
using namespace std;
class Lecture
{
	private:
		string lecturer_name;
		string lecturer_subject;
		string lecturer_course;
		int lecturer_count;
	public:	
	void initial_value(string name, string subject,string course,int count)// initial lecturer detail
	{

		this->lecturer_name=lecturer_name;
		this->lecturer_subject=lecturer_subject;
		this->lecturer_course=lecturer_course;
	}	
	void lecture_detail()
	{
		cout<<"Enter the lecture name == ";
		cin>>lecturer_name;
		cout<<"Enter the lecture subject == ";
		cin>>lecturer_subject;
		cout<<"Enter the lecture course == ";
		cin>>lecturer_course;
		cout<<"Enter the lecture count == ";
		cin>>lecturer_count;
	}
	void display_name_and_lecture_detail()
	{
		cout<<"Lecture name === "<<lecturer_name<<endl;
		cout<<"Lenture subject === "<<lecturer_subject<<endl;
		cout<<"Lecture course === "<<lecturer_course<<endl;
		cout<<"Lecture count === "<<lecturer_count<<endl;
	}
};
main()
{
	int arrSize=5;
	Lecture lecturerr[arrSize];
	int i;
	for(i=0;i<arrSize;i++)
	{
		cout<<"\nEnter the lecture detail === "<<i+1<<endl;
		lecturerr[i].lecture_detail();
	}
	for(i=0;i<arrSize;i++)
	{
		cout<<"\noutput of lecture detail === "<<i+1<<endl;
		lecturerr[i].display_name_and_lecture_detail();
	}
}
