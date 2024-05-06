/*Jay Phad 
AmrutVahini College of Engineering
Develop a program in C++ to create a database of student’s information system containing the following information: Name, Roll 
number, Class, Division, Date of Birth, Blood group, Contact address, Telephone number, Driving license no. and other. 
Construct the database with suitable member functions. Make use of constructor, default constructor, copy constructor, 
destructor, static member functions, friend class, this pointer, inline code and dynamic memory allocation operators-new and delete as well as 
exception handling*/

#include<iostream>
#include<string.h>
using namespace std;
class student
{
	public:
	int roll;
	char name[10];
	char year[10];
	char div;
	char dob[20];
	static int count;
	
	student()
	{
		roll=28;
		strcpy(name,"jay");
		strcpy(year,"SE");
		div='B';
		strcpy(dob,"09/06/2004");
		count++;	
	}
	student(student &s)
	{
		roll=s.roll;
		strcpy(name,s.name);
		strcpy(year,s.year);
		div=s.div;
		strcpy(dob,s.dob);
		count++;
	}
	void getdata()
	{
		cout<<"enter roll:";
		cin>>roll;
		cout<<"enter the name:";
		cin>>name;
		cout<<"enter the year:";
		cin>>year;
		cout<<"enter the div:";
		cin>>div;
		cout<<"enter the dob:";
		cin>>dob;
		
		}
		static void countshow()
		{
			cout<<"number of student :"<<count;
			
		}	
		friend void display(student *s);
		~student()
		{
			
		}
};
void display(student *s)
{
	cout<<s->roll<<"\t"<<s->name<<"\t"<<s->year<<"\t"<<s->div<<"\t"<<s->dob<<endl;
}
int student::count=0;
int main()
{
	student *s1;
	student *s2;
	s1=new student;
	s2=new student(*s1);
	display(s1);
	display(s2);
	
	int n;
	cout<<"enter the number of record you want to insert:";
	cin>>n;
	
	student *arr[n];
	for(int i=0;i<n;i++)
	{
		arr[i]=new student;
		arr[i]->getdata();
		
	}
	cout<<"\n roll  \t name \t year \t division \t  dob\n";
	for(int i=0;i<n;i++) 
	{
		display(arr[i]);
	}
    	student::countshow();
		return 0;	
}
